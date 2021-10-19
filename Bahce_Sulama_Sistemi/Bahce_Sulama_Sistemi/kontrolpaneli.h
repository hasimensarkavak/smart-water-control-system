#include <Arduino.h>
String SendKontrolSayfa(bool sifirla)
{
    String kontrolPaneliSayfa =
        "<!DOCTYPE html>\n"
        "<html lang=\"en\">\n"
        "\n"
        "<head>\n"
        "    <meta charset=\"UTF-8\">\n"
        "    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n"
        "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
        "    <title>Kontrol Paneli</title>\n"
        "    <!--Font Google-->\n"
        "    <link href=\"https://fonts.googleapis.com/css2?family=Open+Sans:wght@400;700&display=swap\" rel=\"stylesheet\">\n"
        "\n"
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
        "        /* HTML */\n"
        "        html {\n"
        "            font-family: \"Open Sans\", sans-serif;\n"
        "        }\n"
        "\n"
        "        .heading-big {\n"
        "            font-family: 'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif;\n"
        "            font-style: italic;\n"
        "            font-weight: 600;\n"
        "            font-size: 2rem;\n"
        "        }\n"
        "        \n"
        "        /* Colors */\n"
        "        .bg-dark-blue {\n"
        "            background: #062e51;\n"
        "            position: sticky;\n"
        "            position: -webkit-sticky;\n"
        "            top: 0px;\n"
        "            z-index: 1000;\n"
        "        }\n"
        "\n"
        "        .bg-light-blue {\n"
        "            background: #336ea2;\n"
        "        }\n"
        "\n"
        "        .bg-lighter-blue {\n"
        "            background: #70abdf;\n"
        "        }\n"
        "\n"
        "        /* NAVBAR */\n"
        "\n"
        "        .container {\n"
        "            max-width: 1100px;\n"
        "            margin: 0 auto;\n"
        "            color: white;\n"
        "            display: flex;\n"
        "            justify-content: space-between;\n"
        "            align-items: center;\n"
        "            padding: 5px 5px;\n"
        "            height: 80px;\n"
        "            font-size: 22px;\n"
        "        }\n"
        "\n"
        "        .header_tarih {\n"
        "            text-align: center;\n"
        "            font-size: 20px;\n"
        "        }\n"
        "\n"
        "        /* Section */\n"
        "        section {\n"
        "            padding: 20px 5px;\n"
        "            color: white;\n"
        "            text-align: center;\n"
        "            font-size: 25px;\n"
        "            font-family: \"Open Sans\", sans-serif;\n"
        "            flex-direction: column;\n"
        "\n"
        "        }\n"
        "\n"
        "        section form select {\n"
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
        "            border: 1px solid #70abdf;\n"
        "            margin-left: 20px;\n"
        "        }\n"
        "\n"
        "        section input {\n"
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
        "            border: 1px solid #70abdf;\n"
        "        }\n"
        "\n"
        "        /* SULAMA SAATLERİ */\n"
        "        #sulama_saatleri {\n"
        "            \n"
        "            width: 100%;\n"
        "            background: #70abdf;\n"
        "        }\n"
        "\n"
        "        .ss {\n"
        "            font-family: \"Open Sans\", sans-serif;\n"
        "            float: left;\n"
        "            width: 33%;\n"
        "            background: #70abdf;\n"
        "            color: white;\n"
        "            text-align: center;\n"
        "            font-size: 25px;\n"
        "            padding-bottom: 50px;\n"
        "        }\n"
        "\n"
        "        .ss h4 {\n"
        "            color: #336ea2;\n"
        "        }\n"
        "    </style>\n"
        "\n"
        "    <!-- TABLET -->\n"
        "    <style media=\"(max-width:1024px\">\n"
        "        .container {\n"
        "            height: 170px;\n"
        "            flex-direction: column;\n"
        "        }\n"
        "\n"
        "        .ss {\n"
        "            padding-top: 20px;\n"
        "            width: 100%;\n"
        "        }\n"
        "    </style>\n"
        "\n"
        "    <!-- MOBİL -->\n"
        "    <style media=\"(max-width:500px\">\n"
        "\n"
        "        .container {\n"
        "            height: 100px;\n"
        "            font-size: 15px;\n"
        "            flex-direction: column;\n"
        "        }\n"
        "        \n"
        "        #başlık {\n"
        "            font-size: 11px;\n"
        "        }\n"
        "\n"
        "        .header_tarih {\n"
        "            font-size: 15px;\n"
        "        }\n"
        "        \n"
        "        .ss {\n"
        "            padding-top: 20px;\n"
        "            width: 100%;\n"
        "        }\n"
        "    </style>\n"
        "\n"
        "    <!-- FOOTER -->\n"
        "    <style>\n"
        "        footer {\n"
        "            width: 100%;\n"
        "            background: #062e51;\n"
        "            color: white;\n"
        "            padding: 20px 20px;\n"
        "            display: inline-block;\n"
        "            text-align: center;\n"
        "            font-size: 25px;\n"
        "        }\n"
        "    </style>\n"
        "</head>\n"
        "\n"
        "<body>\n"
        "    <!--NAVBAR-->\n"
        "    <header class=\"bg-dark-blue\">\n"
        "        <div class=\"container\">\n"
        "            <nav id=\"başlık\">\n"
        "                <a href=\"#top\">\n"
        "                    <h1>Kontrol Paneli</h1>\n"
        "                </a>\n"
        "            </nav>\n"
        "            <nav id=\"tarih\">\n"
        "                <h4 id=\"clock\" class=\"header_tarih\"></h4>\n"
        "            </nav>\n"
        "            <nav id=\"geri_dön\">\n"
        "                <a href=\"/\">\n"
        "                    <h4>Geri Dön</h4>\n"
        "                </a>\n"
        "            </nav>\n"
        "        </div>\n"
        "    </header>\n"
        "\n"
        "    <section class=\"bg-lighter-blue\">\n"
        "        <div class=\"section\">\n"
        "            <form action=\"/kontrolform\">\n"
        "                <br>\n"
        "                <label>Vana:</label>\n"
        "                <select name=\"vana\" id=\"vana\">\n"
        "                    <option value=\"vana1\" selected>1. Vana</option>\n"
        "                    <option value=\"vana2\">2. Vana</option>\n"
        "                    <option value=\"vana3\">3. Vana</option>\n"
        "                    <option value=\"vana4\">4. Vana</option>\n"
        "                </select>\n"
        "                <br> <br>\n"
        "                <label>Gün:</label>\n"
        "                <select name=\"gun\" id=\"gun\">\n"
        "                    <option value=\"pazartesi\" selected>Pazartesi</option>\n"
        "                    <option value=\"sali\">Salı</option>\n"
        "                    <option value=\"carsamba\">Çarşamba</option>\n"
        "                    <option value=\"persembe\">Perşembe</option>\n"
        "                    <option value=\"cuma\">Cuma</option>\n"
        "                    <option value=\"cumartesi\">Cumartesi</option>\n"
        "                    <option value=\"pazar\">Pazar</option>\n"
        "                </select>\n"
        "                <br> <br>\n"
        "                <input type=\"submit\" name=\"submit\" id=\"submit\" value=\"GÖSTER\">\n"
        "<input type=\"submit\" name=\"submit\" id=\"submit\" value=\"SIFIRLA\"> \n"
        " <br> <br> <br>\n"
        "                <label>Vana Durumu:</label> <label>BOŞ</label>\n"
        "            </form>\n"
        "            <br> <br>\n"
        "            \n"
        "            \n"
        "        </div>\n"
        "    </section>\n"
        "    \n"
        "    <div id=\"sulama_saatleri\">\n"
        "        <div class=\"ss\" id=\"ss1\">\n"
        "            <h4>1. Sulama Saati</h4> <br>\n"
        "            <label>Başlangıç:</label> <label>BOŞ</label> <br> <br>\n"
        "            <label>Bitiş:</label> <label>BOŞ</label>\n"
        "        </div>\n"
        "        <div class=\"ss\" id=\"ss2\">\n"
        "            <h4>2. Sulama Saati</h4> <br>\n"
        "            <label>Başlangıç:</label> <label>BOŞ</label> <br> <br>\n"
        "            <label>Bitiş:</label> <label>BOŞ</label>\n"
        "        </div>\n"
        "        <div class=\"ss\" id=\"ss3\">\n"
        "            <h4>3. Sulama Saati</h4> <br>\n"
        "            <label>Başlangıç:</label> <label>BOŞ</label> <br> <br>\n"
        "            <label>Bitiş:</label> <label>BOŞ</label>\n"
        "        </div>\n"
        "    </div>\n"
        "     \n"
        "    \n"
        "    <footer>\n"
        "        <label class=\"heading-big\">Kristal Smart Home</label> <br> <br>\n"
        "        <label>www.kristalsmarthome.com</label>\n"
        "    </footer>\n"
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
    if (sifirla == true)
    {
        kontrolPaneliSayfa +=
            "<script>alert(\"Sıfırlandı\")</script>\n";
    }
    kontrolPaneliSayfa +=
        "\n"
        "</html>";
    return kontrolPaneliSayfa;
}