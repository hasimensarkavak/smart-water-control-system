#include <Arduino.h>
String SendHTML(bool Role1stat, bool Role2stat, bool Role3stat, bool Role4stat, bool kayit){
    String page ="<!DOCTYPE html>\n"
"<html lang=\"en\">\n"
"\n"
"\n"
"<head>\n"
"    <meta charset=\"UTF-8\">\n"
"    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
"    <title>Bahçe Sulama Sistemi</title>\n"
"    <!--Font Google-->\n"
"    <link href=\"https://fonts.googleapis.com/css2?family=Open+Sans:wght@400;700&display=swap\" rel=\"stylesheet\">\n"
"\n"
"    <!--global-->\n"
"    <style>\n"
"        /* Text */\n"
"        .text-center {\n"
"            text-align: center;\n"
"        }\n"
"\n"
"        .heading-small {\n"
"            font-size: 1.25rem;\n"
"        }\n"
"\n"
"        .heading-medium {\n"
"            font-size: 1.5rem;\n"
"        }\n"
"\n"
"        .heading-big {\n"
"            font-family: 'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;\n"
"            font-size: 2rem;\n"
"            font-style: italic;\n"
"            font-weight: 600;\n"
"        }\n"
"\n"
"        /* Colors */\n"
"        .bg-dark-blue {\n"
"            background: #062e51;\n"
"        }\n"
"\n"
"        .bg-light-blue {\n"
"            background: #336ea2;\n"
"        }\n"
"\n"
"        /* Container navbar */\n"
"        .container {\n"
"            max-width: 1200px;\n"
"            margin: 0 auto;\n"
"        }\n"
"\n"
"        .container a {\n"
"            font-size: 20px;\n"
"        }\n"
"\n"
"        /* 1. ve 3. DURUM BUTONLARI */\n"
"        .durum_button_1-3 {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 200px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"        }\n"
"\n"
"        /* 2. ve 4. DURUM BUTONLARI */\n"
"        .durum_button_2-4 {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 200px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"    </style>\n"
"\n"
"    <!--main-->\n"
"    <style>\n"
"        /* ALL */\n"
"        * {\n"
"            margin: 0;\n"
"            padding: 0;\n"
"            box-sizing: border-box;\n"
"        }\n"
"\n"
"        /* Link */\n"
"        a {\n"
"            text-decoration: none;\n"
"            color: white;\n"
"        }\n"
"\n"
"        html {\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"        }\n"
"\n"
"        .header_tarih {\n"
"            text-align: center;\n"
"            font-size: 22px;\n"
"        }\n"
"\n"
"        /* NAVBAR */\n"
"\n"
"        #navbar {\n"
"            color: white;\n"
"            display: flex;\n"
"            justify-content: space-between;\n"
"            align-items: center;\n"
"            padding: 5px 5px;\n"
"            height: 80px;\n"
"        }\n"
"\n"
"        #navbar ul {\n"
"            list-style-type: none;\n"
"            display: flex;\n"
"            align-items: center;\n"
"        }\n"
"\n"
"        #navbar ul li a {\n"
"            padding: 0.5rem;\n"
"        }\n"
"\n"
"        #navbar ul li a:hover {\n"
"            background: #336ea2;\n"
"            border-radius: 4px;\n"
"        }\n"
"\n"
"        /* 1. RÖLE BUTON */\n"
"\n"
"        #röle1-buton label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle1-buton button {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"        }\n"
"\n"
"        /* 2. RÖLE BUTON */\n"
"\n"
"        #röle2-buton label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle2-buton button {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2 !important;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        /* 3. RÖLE BUTON */\n"
"\n"
"        #röle3-buton label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle3-buton button {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"        }\n"
"\n"
"        /* 4. RÖLE BUTON */\n"
"\n"
"        #röle4-buton label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle4-buton button {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        /* 1. RÖLE */\n"
"        #röle1 {\n"
"            height: 1150px;\n"
"            width: 25%;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"\n"
"            font-size: 0.75rem;\n"
"            padding: 5px 5px;\n"
"        }\n"
"\n"
"        #röle1 label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"\n"
"\n"
"        #röle1 form {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"\n"
"        }\n"
"\n"
"        #röle1 form select {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"        }\n"
"\n"
"        #röle1 form input {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"        }\n"
"\n"
"        /* 2. RÖLE */\n"
"        #röle2 {\n"
"            height: 1150px;\n"
"            width: 25%;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            float: left;\n"
"            font-size: 0.75rem;\n"
"            padding: 5px 5px;\n"
"        }\n"
"\n"
"        #röle2 label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle2 button {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"        }\n"
"\n"
"        #röle2 form {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"        }\n"
"\n"
"        #röle2 form select {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        #röle2 form input {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        /* 3. RÖLE */\n"
"        #röle3 {\n"
"            height: 1150px;\n"
"            width: 25%;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            float: left;\n"
"            font-size: 0.75rem;\n"
"            padding: 5px 5px;\n"
"        }\n"
"\n"
"        #röle3 label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle3 form {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"        }\n"
"\n"
"        #röle3 form select {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"        }\n"
"\n"
"        #röle3 form input {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #336ea2;\n"
"        }\n"
"\n"
"        /* 4. RÖLE */\n"
"        #röle4 {\n"
"            height: 1150px;\n"
"            width: 25%;\n"
"            background: #70abdf;\n"
"            color: white;\n"
"            float: left;\n"
"            font-size: 0.75rem;\n"
"            padding: 5px 5px;\n"
"        }\n"
"\n"
"        #röle4 label {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"        }\n"
"\n"
"        #röle4 form {\n"
"            padding: 5px;\n"
"            font-size: x-large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"        }\n"
"\n"
"        #röle4 form select {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        #röle4 form input {\n"
"            font-size: large;\n"
"            font-family: \"Open Sans\", sans-serif;\n"
"            background: #336ea2;\n"
"            color: white;\n"
"            height: 40px;\n"
"            width: 100px;\n"
"            border-radius: 12px;\n"
"            text-decoration: none;\n"
"            text-align: center;\n"
"            position: relative;\n"
"            left: 50%;\n"
"            transform: translate(-50%, 0%);\n"
"            display: inline-block;\n"
"            border: 1px solid #70abdf;\n"
"        }\n"
"\n"
"        .head1 {\n"
"            position: sticky !important;\n"
"            position: -webkit-sticky !important;\n"
"            top: 0;\n"
"            z-index: 1;\n"
"        }\n"
"\n"
"        section {\n"
"            display: flex;\n"
"        }\n"
"\n"
"        #footer {\n"
"            width: 100%;\n"
"        }\n"
"    </style>\n"
"\n"
"    <!--tablet-->\n"
"    <style media=\"(max-width:1024px\">\n"
"        section {\n"
"            flex-direction: column;\n"
"        }\n"
"\n"
"        /* NAVBAR */\n"
"        #navbar {\n"
"            top: 0px;\n"
"            left: 0px;\n"
"            right: 0px;\n"
"            height: 0px;\n"
"            background: #062e51;\n"
"\n"
"            z-index: 1;\n"
"\n"
"            flex-direction: column;\n"
"            padding-top: 0.5rem;\n"
"            padding-bottom: 8px;\n"
"            overflow: hidden;\n"
"            height: 150px;\n"
"        }\n"
"\n"
"        /* 1. RÖLE */\n"
"        #röle1 {\n"
"            height: 1150px;\n"
"            width: 100%;\n"
"        }\n"
"\n"
"        /* 2. RÖLE */\n"
"        #röle2 {\n"
"            height: 1150px;\n"
"            width: 100%;\n"
"        }\n"
"\n"
"        /* 3. RÖLE */\n"
"        #röle3 {\n"
"            height: 1150px;\n"
"            width: 100%;\n"
"        }\n"
"\n"
"        /* 4. RÖLE */\n"
"        #röle4 {\n"
"            height: 1150px;\n"
"            width: 100%;\n"
"        }\n"
"    </style>\n"
"\n"
"\n"
"    <!--mobil-->\n"
"    <style media=\"(max-width:500px\">\n"
"        section {\n"
"            flex-direction: column;\n"
"        }\n"
"\n"
"header h1 {\n"
"            font-size: 27px;\n"
"        }\n"
"\n"
"       .header_tarih {\n"
"           font-size: 20px;\n"
"       }\n"
"        /* NAVBAR */\n"
"        #navbar {\n"
"            top: 0px;\n"
"            left: 0px;\n"
"            right: 0px;\n"
"            height: 0px;\n"
"            background: #062e51;\n"
"\n"
"            z-index: 1;\n"
"\n"
"            flex-direction: column;\n"
"            padding-top: 0.3rem;\n"
"            padding-bottom: 8px;\n"
"            overflow: hidden;\n"
"            height: 180px;\n"
"            \n"
"        }\n"
"\n"
"        /* 1. RÖLE */\n"
"        #röle1 {\n"
"            width: 100%;\n"
"            height: 1150px;\n"
"        }\n"
"\n"
"        /* 2. RÖLE */\n"
"        #röle2 {\n"
"\n"
"            width: 100%;\n"
"            height: 1150px;\n"
"        }\n"
"\n"
"        /* 3. RÖLE */\n"
"        #röle3 {\n"
"            width: 100%;\n"
"            height: 1150px;\n"
"        }\n"
"\n"
"        /* 4. RÖLE */\n"
"        #röle4 {\n"
"            width: 100%;\n"
"            height: 1150px;\n"
"        }\n"
"    </style>\n"
"\n"
"    <!--iphone5/se-->\n"
"    <style media=\"(max-width: 320px\">\n"
"        header h1 {\n"
"            font-size: 20px;\n"
"        }\n"
"\n"
"        .header_tarih {\n"
"            font-size: 17px;\n"
"        }\n"
"\n"
"    </style>\n"
"\n"
"    <style>\n"
"        footer {\n"
"            color: white;\n"
"            text-align: center;\n"
"            padding: 20px 20px;\n"
"            font-size: 25px;\n"
"        }\n"
"    </style>\n"
"\n"
"</head>\n"
"\n"
"\n"
"<body>\n"
"    <!--NAVBAR-->\n"
"    <header class=\"bg-dark-blue head1\">\n"
"\n"
"        <div class=\"container\">\n"
"            <nav id=\"navbar\">\n"
"                <a href=\"/\">\n"
"                    <h1>Bahçe Sulama Sistemi</h1>\n"
"                </a>\n"
"                <h6 id=\"clock\" class=\"header_tarih\"></h6>\n"
"                <a href=\"/kontrolpaneli\">\n"
"                    <h1>Kontrol Paneli</h1>\n"
"                </a>\n"
"            </nav>\n"
"        </div>\n"
"    </header>\n"
"\n"
"\n"
"    <section>\n"
"        <!--RÖLE 1-->\n"
"        <div id=\"röle1\">\n"
"            <div id=\"röle1-buton\">\n"
"                <br>\n"
"                <label>1. Vana: </label> <br>\n";
if(Role1stat)
{
    page+=
    "                <a href=\"/role1/off\">\n"
    "                    <button>KAPAT</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Açık</label>\n";
}
else
{
    page+=
    "                <a href=\"/role1/on\">\n"
    "                    <button>AÇ</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Kapalı</label>\n";
}
page+=
"                <br> <br>\n"
"            </div>\n"
"\n"
"            <form action=\"/form/1\">\n"
"                <label>Gün: </label> <br>\n"
"                <select name=\"gün\" id=\"gün\">\n"
"                    <option value=\"pazartesi\" selected>Pazartesi</option>\n"
"                    <option value=\"sali\">Salı</option>\n"
"                    <option value=\"carsamba\">Çarşamba</option>\n"
"                    <option value=\"persembe\">Perşembe</option>\n"
"                    <option value=\"cuma\">Cuma</option>\n"
"                    <option value=\"cumartesi\">Cumartesi</option>\n"
"                    <option value=\"pazar\">Pazar</option>\n"
"                </select> <br> <br>\n"
"                <label>1. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat1\" id=\"saat1\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat1b\" id=\"saat1b\"> <br> <br>\n"
"                <label>2. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat2\" id=\"saat2\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat2b\" id=\"saat2b\"> <br> <br>\n"
"                <label>3. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat3\" id=\"saat3\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat3b\" id=\"saat3b\"> <br> <br>\n"
"                <input type=\"submit\" name=\"kaydet\" id=\"kaydet\" value=\"KAYDET\"> <br> <br>\n"
"            </form>\n"
"        </div>\n"
"\n"
"        <!--RÖLE 2-->\n"
"        <div id=\"röle2\">\n"
"            <div id=\"röle2-buton\">\n"
"                <br>\n"
"                <label>2. Vana: </label> <br>\n";
if(Role2stat)
{
    page+=
    "                <a href=\"/role2/off\">\n"
    "                    <button>KAPAT</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Açık</label>\n";
}
else
{
    page+=
    "                <a href=\"/role2/on\">\n"
    "                    <button>AÇ</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Kapalı</label>\n";
}
page+=
"                <br> <br>\n"
"            </div>\n"
"\n"
"            <form action=\"/form/2\">\n"
"                <label>Gün: </label> <br>\n"
"                <select name=\"gün\" id=\"gün\">\n"
"                    <option value=\"pazartesi\" selected>Pazartesi</option>\n"
"                    <option value=\"sali\">Salı</option>\n"
"                    <option value=\"carsamba\">Çarşamba</option>\n"
"                    <option value=\"persembe\">Perşembe</option>\n"
"                    <option value=\"cuma\">Cuma</option>\n"
"                    <option value=\"cumartesi\">Cumartesi</option>\n"
"                    <option value=\"pazar\">Pazar</option>\n"
"                </select> <br> <br>\n"
"                <label>1. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat1\" id=\"saat1\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat1b\" id=\"saat1b\"> <br> <br>\n"
"                <label>2. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat2\" id=\"saat2\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat2b\" id=\"saat2b\"> <br> <br>\n"
"                <label>3. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat3\" id=\"saat3\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat3b\" id=\"saat3b\"> <br> <br>\n"
"                <input type=\"submit\" name=\"kaydet\" id=\"kaydet\" value=\"KAYDET\"> <br> <br>\n"
"            </form>\n"
"        </div>\n"
"\n"
"        <!--RÖLE 3-->\n"
"        <div id=\"röle3\">\n"
"            <div id=\"röle3-buton\">\n"
"                <br>\n"
"                <label>3. Vana: </label> <br>\n";
if(Role3stat)
{
    page+=
    "                <a href=\"/role3/off\">\n"
    "                    <button>KAPAT</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Açık</label>\n";
}
else
{
    page+=
    "                <a href=\"/role3/on\">\n"
    "                    <button>AÇ</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Kapalı</label>\n";
}
page+=
"                <br> <br>\n"
"            </div>\n"
"\n"
"            <form action=\"/form/3\">\n"
"                <label>Gün: </label> <br>\n"
"                <select name=\"gün\" id=\"gün\">\n"
"                    <option value=\"pazartesi\" selected>Pazartesi</option>\n"
"                    <option value=\"sali\">Salı</option>\n"
"                    <option value=\"carsamba\">Çarşamba</option>\n"
"                    <option value=\"persembe\">Perşembe</option>\n"
"                    <option value=\"cuma\">Cuma</option>\n"
"                    <option value=\"cumartesi\">Cumartesi</option>\n"
"                    <option value=\"pazar\">Pazar</option>\n"
"                </select> <br> <br>\n"
"                <label>1. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat1\" id=\"saat1\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat1b\" id=\"saat1b\"> <br> <br>\n"
"                <label>2. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat2\" id=\"saat2\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat2b\" id=\"saat2b\"> <br> <br>\n"
"                <label>3. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat3\" id=\"saat3\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat3b\" id=\"saat3b\"> <br> <br>\n"
"                <input type=\"submit\" name=\"kaydet\" id=\"kaydet\" value=\"KAYDET\"> <br> <br>\n"
"            </form>\n"
"        </div>\n"
"\n"
"        <!--RÖLE 4-->\n"
"        <div id=\"röle4\">\n"
"            <div id=\"röle4-buton\">\n"
"                <br>\n"
"                <label>4. Vana: </label> <br>\n";
if(Role4stat)
{
    page+=
    "                <a href=\"/role4/off\">\n"
    "                    <button>KAPAT</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Açık</label>\n";
}
else
{
    page+=
    "                <a href=\"/role4/on\">\n"
    "                    <button>AÇ</button>\n"
    "                </a>\n"
    "                <br> <br>\n"
    "                <label>Vana Durumu: Kapalı</label>\n";
}
page+=
"                <br> <br>\n"
"            </div>\n"
"            <form action=\"/form/4\">\n"
"                <label>Gün: </label> <br>\n"
"                <select name=\"gün\" id=\"gün\">\n"
"                    <option value=\"pazartesi\" selected>Pazartesi</option>\n"
"                    <option value=\"sali\">Salı</option>\n"
"                    <option value=\"carsamba\">Çarşamba</option>\n"
"                    <option value=\"persembe\">Perşembe</option>\n"
"                    <option value=\"cuma\">Cuma</option>\n"
"                    <option value=\"cumartesi\">Cumartesi</option>\n"
"                    <option value=\"pazar\">Pazar</option>\n"
"                </select> <br> <br>\n"
"                <label>1. Sulama Saati</label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat1\" id=\"saat1\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat1b\" id=\"saat1b\"> <br> <br>\n"
"                <label>2. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat2\" id=\"saat2\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat2b\" id=\"saat2b\"> <br> <br>\n"
"                <label>3. Sulama Saati: </label> <br>\n"
"                <label>Başlangıç:</label> <br>\n"
"                <input type=\"time\" name=\"saat3\" id=\"saat3\"> <br>\n"
"                <label>Bitiş:</label> <br>\n"
"                <input type=\"time\" name=\"saat3b\" id=\"saat3b\"> <br> <br>\n"
"                <input type=\"submit\" name=\"kaydet\" id=\"kaydet\" value=\"KAYDET\"> <br> <br>\n"
"            </form>\n"
"        </div>\n"
"    </section>\n"
"\n"
"    <footer class=\"bg-dark-blue\">\n"
"        <label class=\"heading-big\">Kristal Smart Home</label> <br> <br>\n"
"        <label>www.kristalsmarthome.com</label>\n"
"    </footer>\n"
"\n"
"</body>\n"
"\n"
"<!--TARİH SAAT-->\n"
"<script type=\"text/javascript\">\n"
"    function refrClock() {\n"
"        var d = new Date();\n"
"        var s = d.getSeconds();\n"
"        var m = d.getMinutes();\n"
"        var h = d.getHours();\n"
"        var day = d.getDay();\n"
"        var date = d.getDate();\n"
"        var month = d.getMonth();\n"
"        var year = d.getFullYear();\n"
"        var days = new Array(\"Pazar\", \"Pazartesi\", \"Salı\", \"Çarşamba\", \"Perşembe\", \"Cuma\", \"Cumartesi\");\n"
"        var months = new Array(\"Ocak\", \"Şubat\", \"Mart\", \"Nisan\", \"Mayıs\", \"Haziran\", \"Temmuz\", \"Ağustos\", \"Eylül\", \"Ekim\", \"Kasım\", \"Aralık\");\n"
"        if (s < 10) { s = \"0\" + s }\n"
"        if (m < 10) { m = \"0\" + m }\n"
"        document.getElementById(\"clock\").innerHTML = \"<b>Tarih:</b> \" + date + \" \" + months[month] + \" \" + year + \"   <b></b> \" + days[day] + \"   <br><b>Saat:</b> \" + h + \":\" + m + \":\" + s + \" \"\n"
"        setTimeout(\"refrClock()\", 1000);\n"
"    }\n"
"    refrClock();\n"
"</script>\n";
if(kayit == true)
{
    page+=
    "<script>alert(\"Kaydedildi\")</script>\n";
}
page+=
"\n"
"</html>";
return page;
}