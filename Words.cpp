#include "Words.h"
import utils;

void populateListWords(Storage& storage)
{
	std::vector<Words> words{
		Words{-1,"trandafir",100},
		Words{-1,"artificii",150},
		Words{-1,"cuptor cu microunde",150},
		Words{-1,"clovn",150},
		Words{-1,"cuvant",50},
		Words{-1,"limba",50},
		Words{-1,"calculator",150},
		Words{-1,"Traian Basescu",50},
		Words{-1,"caseta",100},
		Words{-1,"buton",150},
		Words{-1,"grafic",150},
		Words{-1,"schema",50},
		Words{-1,"litera",50},
		Words{-1,"matematica",150},
		Words{-1,"profesor",150},
		Words{-1,"cana",150},
		Words{-1,"cafea",150},
		Words{-1,"Google",150},
		Words{-1,"ochelari",150},
		Words{-1,"oftalmolog",100},
		Words{-1,"dentist",150},
		Words{-1,"telefon fix",150},
		Words{-1,"sticla",100},
		Words{-1,"servetel",100},
		Words{-1,"raceala",100},
		Words{-1,"nervos",50},
		Words{-1,"bucle",100},
		Words{-1,"frizerie",150},
		Words{-1,"lumina",50},
		Words{-1,"arhitect",100},
		Words{-1,"programator",150},
		Words{-1,"sofer",150},
		Words{-1,"masina",150},
		Words{-1,"autobuz scolar",150},
		Words{-1,"camera video",100},
		Words{-1,"botez",100},
		Words{-1,"mireasa",150},
		Words{-1,"bebelus",150},
		Words{-1,"covrig",100},
		Words{-1,"creioane colorate",150},
		Words{-1,"tablou",100},
		Words{-1,"violet",50},
		Words{-1,"trandafiriu",50},
		Words{-1,"rebus",50},
		Words{-1,"Kaufland",150},
		Words{-1,"setari",50},
		Words{-1,"Victor Ponta",50},
		Words{-1,"rulouri",100},
		Words{-1,"Selly",50},
		Words{-1,"tigaie",150},
		Words{-1,"geometrie",100},
		Words{-1,"gnom",50},
		Words{-1,"avizier",100},
		Words{-1,"oglinda",150},
		Words{-1,"Aurora Boreala",100},
		Words{-1,"dolar",150},
		Words{-1,"cabana",100},
		Words{-1,"curcubeu",150},
		Words{-1,"veioza",150},
		Words{-1,"suc",150},
		Words{-1,"acnee",150},
		Words{-1,"aparat dentar",100},
		Words{-1,"miopie",50},
		Words{-1,"adolescent",50},
		Words{-1,"ghiozdan",150},
		Words{-1,"pusca",50},
		Words{-1,"palarie",150},
		Words{-1,"curea",150},
		Words{-1,"ghilotina",100},
		Words{-1,"ascensor",100},
		Words{-1,"convexitate",100},
		Words{-1,"descendent",50},
		Words{-1,"peste",150},
		Words{-1,"RAM",50},
		Words{-1,"instalator",100},
		Words{-1,"plata",50},
		Words{-1,"ciob",50},
		Words{-1,"trabuc",100},
		Words{-1,"uscat",50},
		Words{-1,"umed",50},
		Words{-1,"mar",150},
		Words{-1,"diferenta",100},
		Words{-1,"mare",100},
		Words{-1,"mic",50},
		Words{-1,"fantoma",150},
		Words{-1,"pamant",50},
		Words{-1,"univers",150},
		Words{-1,"mormant",150},
		Words{-1,"Statuia Libertatii",100},
		Words{-1,"credinta",100},
		Words{-1,"idee",100},
		Words{-1,"ventilator",150},
		Words{-1,"feon",100},
		Words{-1,"Facebook",150},
		Words{-1,"portiera",100},
		Words{-1,"motor",100},
		Words{-1,"ghidon",100},
		Words{-1,"parcare",150},
		Words{-1,"gara",100},
		Words{-1,"carte",150},
		Words{ -1,"locuinta",50 },
		Words{ -1,"spiridus",50 },
		Words{ -1,"incarcator",100 },
		Words{ -1,"miraj",50 },
		Words{ -1,"umbra",100 },
		Words{ -1,"pisica",100 },
		Words{ -1,"ghinion",50 },
		Words{ -1,"ecran",100 },
		Words{ -1,"randunica",50 },
		Words{ -1,"Instagram",150 },
		Words{ -1,"vointa",50 },
		Words{ -1,"ciocolata",150 },
		Words{ -1,"budinca",150 },
		Words{ -1,"zi de nastere",150 },
		Words{ -1,"aniversare",50 },
		Words{ -1,"ghirlanda",150 },
		Words{ -1,"familie",150 },
		Words{ -1,"Craciun",150 },
		Words{ -1,"sarmale",150 },
		Words{ -1,"Franta",150 },
		Words{ -1,"napolitane",100 },
		Words{ -1,"Klaus Iohannis",50 },
		Words{ -1,"nume de familie",100 },
		Words{ -1,"carte de identitate",150 },
		Words{ -1,"CNP",100 },
		Words{ -1,"veteran",50 },
		Words{ -1,"tanc",100 },
		Words{ -1,"castron",100 },
		Words{ -1,"strachina",50 },
		Words{ -1,"bunic",100 },
		Words{ -1,"frati",100 },
		Words{ -1,"gemeni",100 },
		Words{ -1,"rochie",150 },
		Words{ -1,"papion",150 },
		Words{ -1,"brunet",150 },
		Words{ -1,"gene false",100 },
		Words{ -1,"locatie",50 },
		Words{ -1,"politie",100 },
		Words{ -1,"IKEA",100 },
		Words{ -1,"chifle",150 },
		Words{ -1,"metrou",100 },
		Words{ -1,"Carrefour",150 },
		Words{ -1,"Auchan",100 },
		Words{ -1,"mango",100 },
		Words{ -1,"papaya",100 },
		Words{ -1,"parfum",150 },
		Words{ -1,"mireasma",50 },
		Words{ -1,"teapa",50 },
		Words{ -1,"Vlad Tepes",100 },
		Words{ -1,"vampir",100 },
		Words{ -1,"rotund",50 },
		Words{ -1,"scrisoare",100 },
		Words{ -1,"cerc",100 },
		Words{ -1,"verde",50 },
		Words{ -1,"masca",100 },
		Words{ -1,"bal mascat",50 },
		Words{ -1,"plita",100 },
		Words{ -1,"bucatar",150 },
		Words{ -1,"salata",150 },
		Words{ -1,"viroza",50 },
		Words{ -1,"coacaze",100 },
		Words{ -1,"magnolie",50 },
		Words{ -1,"orhidee",50 },
		Words{ -1,"Ziua Mamei",100 },
		Words{ -1,"copil",150 },
		Words{ -1,"stralucitor",100 },
		Words{ -1,"argint",100 },
		Words{ -1,"casatorie",150 },
		Words{ -1,"teava",50 },
		Words{ -1,"interfon",150 },
		Words{ -1,"sonerie",100 },
		Words{ -1,"bomboane",150 },
		Words{ -1,"ambalaj",150 },
		Words{ -1,"cadou",150 },
		Words{ -1,"Mos Craciun",150 },
		Words{ -1,"priza",150 },
		Words{ -1,"mici cu mustar",150 },
		Words{ -1,"degustator de vin",100 },
		Words{ -1,"scut",150 },
		Words{ -1,"craniu",150 },
		Words{ -1,"primarie",150 },
		Words{ -1,"vacanta",100 },
		Words{ -1,"Maldive",50 },
		Words{ -1,"palmier",100 },
		Words{ -1,"ocean",100 },
		Words{ -1,"continent",100 },
		Words{ -1,"America",150 },
		Words{ -1,"pizza",150 },
		Words{ -1,"tomberon",150 },
		Words{ -1,"marmelada",100 },
		Words{ -1,"mic dejun",150 },
		Words{ -1,"orez cu lapte",100 },
		Words{ -1,"fructiera",100 },
		Words{ -1,"scortisoara",50 },
		Words{ -1,"piper",150 },
		Words{ -1,"mucenici",100 },
		Words{ -1,"pasta de tomate",100 },
		Words{ -1,"sos de rosii",150 },
		Words{ -1,"sah",150 },
		Words{ -1,"regina",150 },
		Words{ -1,"cal",100 },
		Words{ -1,"Arc de Triumf",100 },
		Words{ -1,"Poarta Sarutului",50 },
		Words{ -1,"Coloana Infinitului",50 },
		Words{ -1,"Cleopatra",50 },
		Words{ -1,"calcai",50 },
		Words{ -1,"Medusa",100 },
		Words{ -1,"meduza",150 },
		Words{ -1,"caracatita",100 },
		Words{ -1,"balena",100 },
		Words{ -1,"pestera",100 },
		Words{ -1,"pustnic",50 },
		Words{ -1,"biliard",150 },
		Words{ -1,"bula",100 },
		Words{ -1,"iarba",150 },
		Words{ -1,"gazon",100 },
		Words{ -1,"sapa",150 },
		Words{ -1,"lopata",150 },
		Words{ -1,"masina de tuns iarba",50 },
		Words{ -1,"Mihai Eminescu",50 },
		Words{ -1,"Veronica Micle",50 },
		Words{ -1,"Amintiri din copilarie",50 },
		Words{ -1,"vanatoare",50 },
		Words{ -1,"prada",50 },
		Words{ -1,"regat",100 },
		Words{ -1,"imparat",150 },
		Words{ -1,"Harap Alb",50 },
		Words{ -1,"unghii",150 },
		Words{ -1,"buze",150 },
		Words{ -1,"deget de la picior",100 },
		Words{ -1,"deget inelar",100 },
		Words{ -1,"deget mare",100 },
		Words{ -1,"deget mic",100 },
		Words{ -1,"tort",150 },
		Words{ -1,"frisca",150 },
		Words{ -1,"Starbucks",150 },
		Words{ -1,"KFC",100 },
		Words{ -1,"jandarmerie",100 },
		Words{ -1,"masina de pompieri",150 },
		Words{ -1,"urgente",100 },
		Words{ -1,"cinema",150 },
		Words{ -1,"erou",50 },
		Words{ -1,"vapor",150 },
		Words{ -1,"pirat",150 },
		Words{ -1,"ciclop",150 },
		Words{ -1,"ciclon",50 },
		Words{ -1,"zeu",100 },
		Words{ -1,"tunet",50 },
		Words{ -1,"fulger",150 },
		Words{ -1,"furtuna",50 },
		Words{ -1,"apocalipsa",50 },
		Words{ -1,"caleasca",50 },
		Words{ -1,"cataclism",50 },
		Words{ -1,"ciclism",100 },
		Words{ -1,"Sud",150 },
		Words{ -1,"Nord",150 },
		Words{ -1,"Est",150 },
		Words{ -1,"Vest",150 },
		Words{ -1,"busola",150 },
		Words{ -1,"cada",150 },
		Words{ -1,"draperie",150 },
		Words{ -1,"covor",150 },
		Words{ -1,"lume",100 },
		Words{ -1,"biserica",150 },
		Words{ -1,"mistic",50 },
		Words{ -1,"ceata",100 },
		Words{ -1,"padure",150 },
		Words{ -1,"luminis",50 },
		Words{ -1,"menta",100 },
		Words{ -1,"musetel",50 },
		Words{ -1,"gheata",150 },
		Words{ -1,"patinoar",150 },
		Words{ -1,"conopida",100 },
		Words{ -1,"papadie",150 },
		Words{ -1,"vreme",100 },
		Words{ -1,"zana",100 },
		Words{ -1,"dinte de lapte",50 },
		Words{ -1,"reparatie",50 },
		Words{ -1,"judecator",100 },
		Words{ -1,"film",100 },
		Words{ -1,"gustare",100 },
		Words{ -1,"dovleac",150 },
		Words{ -1,"labirint",150 },
		Words{ -1,"stop",150 },
		Words{ -1,"iesire",150 },
		Words{ -1,"viziune",50 },
		Words{ -1,"vraja",50 },
		Words{ -1,"mixer",150 },
		Words{ -1,"espressor",50 },
		Words{ -1,"nota e trecere",50 },
		Words{ -1,"sunca",50 },
		Words{ -1,"salam",100 },
		Words{ -1,"branza",100 },
		Words{ -1,"rosii",150 },
		Words{ -1,"castraveti",150 },
		Words{ -1,"iaurt",100 },
		Words{ -1,"luminite",100 },
		Words{ -1,"calorifer",50 },
		Words{ -1,"zaruri",150 },
		Words{ -1,"joc de noroc",100 },
		Words{ -1,"pantaloni",150 },
		Words{ -1,"bijuterii",150 },
		Words{ -1,"clanta",150 },
		Words{ -1,"Stefan cel Mare",50 },
		Words{ -1,"magie",50 },
		Words{ -1,"tricou",150 },
		Words{ -1,"camera",100 },
		Words{ -1,"curte",150 },
		Words{ -1,"asfalt",100 },
		Words{ -1,"trecere de pietoni",150 },
		Words{ -1,"ceainic",100 },
		Words{ -1,"lampa lui Aladin",100 },
		Words{ -1,"caine dalmatian",100 },
		Words{ -1,"Jack si vrejul de fasole",50 },
		Words{ -1,"lanterna",100 },
		Words{ -1,"test",150 },
		Words{ -1,"liceu",100 },
		Words{ -1,"chimie",100 },
		Words{ -1,"reactie chimica",100 },
		Words{ -1,"mazare",150 },
		Words{ -1,"piure",150 },
		Words{ -1,"angajat",100 },
		Words{ -1,"telecomanda",150 },
		Words{ -1,"helesteu",50 },
		Words{ -1,"rama",150 },
		Words{ -1,"zahar",150 },
		Words{ -1,"sosea",150 },
		Words{ -1,"infrastructura",50 },
		Words{ -1,"alergator",100 },
		Words{ -1,"baterie",100 },
		Words{ -1,"apel telefonic",50 },
		Words{ -1,"spital",100 },
		Words{ -1,"patiserie",100 },
		Words{ -1,"cofetar",50 },
		Words{ -1,"semn",50 },
		Words{ -1,"multime",50 },
		Words{ -1,"gluga",150 },
		Words{ -1,"zambet",150 },
		Words{ -1,"pasaport",100 },
		Words{ -1,"aeroport",100 },
		Words{ -1,"elicopter",150 },
		Words{ -1,"scaun",150 },
		Words{ -1,"vanilie",50 },
		Words{ -1,"abur",100 },
		Words{ -1,"cutie",150 },
		Words{ -1,"pachet",100 },
		Words{ -1,"curier",150 },
		Words{ -1,"distribuire",100 },
		Words{ -1,"frana",100 },
		Words{ -1,"porc",150 },
		Words{ -1,"urs panda",150 },
		Words{ -1,"gaina",50 },
		Words{ -1,"rana",100 },
		Words{ -1,"accident",100 },
		Words{ -1,"laptop",150 },
		Words{ -1,"stele",150 },
		Words{ -1,"intuneric",50 },
		Words{ -1,"noapte",150 },
		Words{ -1,"rasarit",150 },
		Words{ -1,"apus",150 },
		Words{ -1,"nori",150 },
		Words{ -1,"natura",100 },
		Words{ -1,"cartela de acces",50 },
		Words{ -1,"munte",150 },
		Words{ -1,"deal",100 },
		Words{ -1,"campie",100 },
		Words{ -1,"floarea soarelui",150 },
		Words{ -1,"balama",50 },
		Words{ -1,"usa",150 },
		Words{ -1,"diavol",150 },
		Words{ -1,"flacari",100 },
		Words{ -1,"rai",50 },
		Words{ -1,"durere",50 },
		Words{ -1,"bani",150 },
		Words{ -1,"card",100 },
		Words{ -1,"bogat",100 },
		Words{ -1,"sarac",100 },
		Words{ -1,"cod de bare",100 },
		Words{ -1,"patrat",150 },
		Words{ -1,"cateta",100 },
		Words{ -1,"eticheta",150 },
		Words{ -1,"haine",150 },
		Words{ -1,"dulap",150 },
		Words{ -1,"alegere",50 },
		Words{ -1,"maini",150 },
		Words{ -1,"cot",150 },
		Words{ -1,"cort",100 },
		Words{ -1,"foc de tabara",150 },
		Words{ -1,"ciocolata calda",100 },
		Words{ -1,"pictura",100 },
		Words{ -1,"instructiuni",50 },
		Words{ -1,"mobilier",100 },
		Words{ -1,"pilota",100 },
		Words{ -1,"poseta",150 },
		Words{ -1,"grau",50 },
		Words{ -1,"orez",100 },
		Words{ -1,"suflet",50 },
		Words{ -1,"inima",150 },
		Words{ -1,"nas",150 },
		Words{ -1,"ureche",150 },
		Words{ -1,"termos",100 },
		Words{ -1,"termometru",150 },
		Words{ -1,"stranut",50 },
		Words{ -1,"cirese",150 },
		Words{ -1,"portocale",150 },
		Words{ -1,"piele",50 },
		Words{ -1,"inel",150 },
		Words{ -1,"observator",50 },
		Words{ -1,"tastatura",150 },
		Words{ -1,"punct",150 },
		Words{ -1,"semnul exclamarii",150 },
		Words{ -1,"tava",100 },
		Words{ -1,"piscina",150 },
		Words{ -1,"cutit",150 },
		Words{ -1,"furculita",150 },
		Words{ -1,"lingura",150 },
		Words{ -1,"lingura de lemn",100 },
		Words{ -1,"auriu",50 },
		Words{ -1,"marmura",50 },
		Words{ -1,"sticla",150 },
		Words{ -1,"jeleu",50 },
		Words{ -1,"vizita",50 },
		Words{ -1,"cuier",100 },
		Words{ -1,"debara",50 },
		Words{ -1,"raft",100 },
		Words{ -1,"tigru",100 },
		Words{ -1,"centrala",50 },
		Words{ -1,"trening",100 },
		Words{ -1,"berbec",50 },
		Words{ -1,"rac",50 },
		Words{ -1,"fecioara",50 },
		Words{ -1,"scorpion",50 },
		Words{ -1,"varsator",50 },
		Words{ -1,"primavara",100 },
		Words{ -1,"toamna",100 },
		Words{ -1,"iarna",100 },
		Words{ -1,"vara",100 },
		Words{ -1,"trafalet",50 },
		Words{ -1,"pensula",150 },
		Words{ -1,"acuarele",150 },
		Words{ -1,"crocodil",50 },
		Words{ -1,"broasca testoasa",100 },
		Words{ -1,"horoscop",50 },
		Words{ -1,"taxi",150 },
		Words{ -1,"alarma",150 },
		Words{ -1,"parchet",50 },
		Words{ -1,"sobolan",50 },
		Words{ -1,"Cenusareasa",50 },
		Words{ -1,"lup",100 },
		Words{ -1,"soparla",100 },
		Words{ -1,"surub",100 },
		Words{ -1,"ciocan",150 },
		Words{ -1,"dragon",50 },
		Words{ -1,"sarpe",150 },
		Words{ -1,"maimuta",100 },
		Words{ -1,"mesaj",100 },
		Words{ -1,"aplicatie",150 },
		Words{ -1,"calendar",150 },
		Words{ -1,"muzica",100 },
		Words{ -1,"farfurie",150 },
		Words{ -1,"taraba",100 },
		Words{ -1,"intrare",100 },
		Words{ -1,"lift",50 },
		Words{ -1,"zid",100 },
		Words{ -1,"Samsung",100 },
		Words{ -1,"sultan",50 },
		Words{ -1,"baclava",50 },
		Words{ -1,"ulei de masline",100 },
		Words{ -1,"picnic",150 },
		Words{ -1,"cina",100 },
		Words{ -1,"roata",150 },
		Words{ -1,"moschee",50 },
		Words{ -1,"piatra",100 },
		Words{ -1,"harpa",100 },
		Words{ -1,"sirena",150 },
		Words{ -1,"vulpe",100 },
		Words{ -1,"ochi de aragaz",100 },
		Words{ -1,"tortura",50 },
		Words{ -1,"securitate",100 },
		Words{ -1,"hartie igienica",100 },
		Words{ -1,"gel de dus",100 },
		Words{ -1,"ambulanta",150 },
		Words{ -1,"geam",150 },
		Words{ -1,"pahar",150 },
		Words{ -1,"bananier",150 },
		Words{ -1,"florarie",150 },
		Words{ -1,"ospatar",150 },
		Words{ -1,"corect",100 },
		Words{ -1,"fereastra",150 },
		Words{ -1,"bibelou",50 },
		Words{ -1,"mileu",50 },
		Words{ -1,"sprancene",150 },
		Words{ -1,"breton",150 },
		Words{ -1,"Barbie",150 },
		Words{ -1,"baiat",150 },
		Words{ -1,"fata",150 },
		Words{ -1,"desert",150 },
		Words{ -1,"mustata",150 },
		Words{ -1,"caserola",100 },
		Words{ -1,"drujba",150 },
		Words{ -1,"Borsec",50 },
		Words{ -1,"Dorna",50 },
		Words{ -1,"cleste de par",100 },
		Words{ -1,"elastic",100 },
		Words{ -1,"adeziv",50 },
		Words{ -1,"raza de soare",50 },
		Words{ -1,"bloc",150 },
		Words{ -1,"apartament",100 },
		Words{ -1,"complet",50 },
		Words{ -1,"aparat de ras",50 },
		Words{ -1,"metal",50 },
		Words{ -1,"plic",100 },
		Words{ -1,"posta",100 },
		Words{ -1,"timbru",150 },
		Words{ -1,"vedere",50 },
		Words{ -1,"tufa",100 },
		Words{ -1,"breloc",150 },
		Words{ -1,"cercei",150 },
		Words{ -1,"umeras",150 },
		Words{ -1,"optiune",100 },
		Words{ -1,"esofag",50 },
		Words{ -1,"durere de gat",50 },
		Words{ -1,"costum de baie",150 },
		Words{ -1,"mamaliga",150 },
		Words{ -1,"sorici",50 },
		Words{ -1,"ascutitoare",100 },
		Words{ -1,"penar",150 },
		Words{ -1,"iepure",50 },
		Words{ -1,"vizor",50 },
		Words{ -1,"zodiac",50 },
		Words{ -1,"musca",50 },
		Words{ -1,"loz",50 },
		Words{ -1,"loterie",50 },
		Words{ -1,"biscuiti",100 },
		Words{ -1,"vinil",50 },
		Words{ -1,"prezentator",100 },
		Words{ -1,"radio",100 },
		Words{ -1,"pitic de gradina",100 },
		Words{ -1,"Alba ca Zapada",100 },
		Words{ -1,"groapa",50 },
		Words{ -1,"groaza",50 },
		Words{ -1,"vis",50 },
		Words{ -1,"pistol",100 },
		Words{ -1,"rezultat",50 },
		Words{ -1,"Wi-Fi",150 },
		Words{ -1,"ceas",150 },
		Words{ -1,"Iepurasul de Paste",100 },
		Words{ -1,"divinitate",50 },
		Words{ -1,"salopeta",150 },
		Words{ -1,"pantofi cu toc",100 },
		Words{ -1,"lac de unghii",100 },
		Words{ -1,"paleta de machiaj",100 },
		Words{ -1,"cui",150 },
		Words{ -1,"lemn",100 },
		Words{ -1,"brad",150 },
		Words{ -1,"lumanare",150 },
		Words{ -1,"diez",150 },
		Words{ -1,"liniste",50 },
		Words{ -1,"palton",100 },
		Words{ -1,"parasuta",150 },
		Words{ -1,"sedinta foto",150 },
		Words{ -1,"apa minerala",150 },
		Words{ -1,"izvor",150 },
		Words{ -1,"proiector",100 },
		Words{ -1,"papanasi",100 },
		Words{ -1,"maner",150 },
		Words{ -1,"canapea",100 },
		Words{ -1,"sufragerie",50 },
		Words{ -1,"recipient",100 },
		Words{ -1,"cozonac",100 },
		Words{ -1,"incaltaminte",150 },
		Words{ -1,"Andreea Esca",100 },
		Words{ -1,"fotosinteza",50 },
		Words{ -1,"biologie",50 },
		Words{ -1,"arbore genealogic",100 },
		Words{ -1,"girafa",150 },
		Words{ -1,"elefant",100 },
		Words{ -1,"savana",50 },
		Words{ -1,"slab",100 },
		Words{ -1,"supraponderal",50 },
		Words{ -1,"cantar",150 },
		Words{ -1,"bol",100 },
		Words{ -1,"zapada",150 },
		Words{ -1,"bulgare de zapada",100 },
		Words{ -1,"sanie",100 },
		Words{ -1,"floare de lotus",100 },
		Words{ -1,"costum",150 },
		Words{ -1,"cosmos",50 },
		Words{ -1,"cavaler",100 },
		Words{ -1,"spada",50 },
		Words{ -1,"desen animat",100 },
		Words{ -1,"cartof",100 },
		Words{ -1,"ceapa",150 },
		Words{ -1,"usturoi",150 },
		Words{ -1,"saptamana",150 },
		Words{ -1,"smantana",150 }
	};
	storage.insert_range(words.begin(), words.end());
}

AddChoosenWord::AddChoosenWord(Storage& storage)
	: m_db{ storage }
{
}

AddUserHandler::AddUserHandler(Storage& storage)
	: m_db{ storage }
{
}

AddGameHandler::AddGameHandler(std::vector<Game>& games)
	: m_games{ games }
{
}

AddPlayerHandler::AddPlayerHandler(std::vector<Game>& games)
	: m_games{ games }
{
}

crow::response AddChoosenWord::operator()(const crow::request& req) const
{
	auto bodyArgs = parseUrlArgs(req.body);
	auto end = bodyArgs.end();
	auto productIdIter = bodyArgs.find("word");
	auto quantityIter = bodyArgs.find("price");
	if (productIdIter != end && quantityIter != end)
	{
		Words sbrow;
		sbrow.word = std::stoi(productIdIter->second);
		sbrow.price = std::stoi(quantityIter->second);
		m_db.insert(sbrow);
	}
	return crow::response(201);
}

crow::response AddUserHandler::operator()(const crow::request& req) const
{
	auto bodyArgs = parseUrlArgs(req.body);
	auto end = bodyArgs.end();
	auto usernameIter = bodyArgs.find("username");
	auto passwordIter = bodyArgs.find("password");
	if (usernameIter != end && passwordIter != end)
	{
		User user;
		user.id = -1;
		user.username = usernameIter->second;
		user.password = passwordIter->second;
		m_db.insert(user);
	}
	return crow::response(201);
}

crow::response AddGameHandler::operator()(const crow::request& req) const
{
	auto bodyArgs = parseUrlArgs(req.body);
	auto end = bodyArgs.end();
	auto roomcodeIter = bodyArgs.find("roomcode");
	auto timerIter = bodyArgs.find("timer");
	auto indexDrawerIter = bodyArgs.find("indexDrawer");
	auto timeIter = bodyArgs.find("time");
	auto languageIter = bodyArgs.find("language");
	auto noPlayersIter = bodyArgs.find("noPlayers");
	auto noWordsIter = bodyArgs.find("noWords");
	auto hintsIter = bodyArgs.find("hints");
	auto hostIter = bodyArgs.find("user");

	if (roomcodeIter != end && timerIter != end && indexDrawerIter != end && timeIter != end 
		&& languageIter != end && noPlayersIter != end && noWordsIter != end && hintsIter != end && hostIter != end)
	{
		Settings settings;
		settings.SetTime(std::stoi(timeIter->second));
		settings.SetLanguage(languageIter->second);
		settings.SetNumberPlayers(std::stoi(noPlayersIter->second));
		settings.SetNumberWords(std::stoi(noWordsIter->second));
		settings.SetNumberHints(std::stoi(hintsIter->second));
		Game game(roomcodeIter->second, std::stoi(timerIter->second),std::stoi(indexDrawerIter->second),settings);
		game.AddPlayer(hostIter->second);
		m_games.push_back(game);
	}
	return crow::response(201);
}

crow::response AddPlayerHandler::operator()(const crow::request& req) const
{
	auto bodyArgs = parseUrlArgs(req.body);
	auto end = bodyArgs.end();
	auto roomcodeIter = bodyArgs.find("roomcode");
	for (int index=0; index < m_games.size(); index++)
		if (m_games[index].GetRoomcode() == roomcodeIter->second)
		{
			auto userIter = bodyArgs.find("user");
			if (roomcodeIter != end && userIter != end)
				m_games[index].AddPlayer(userIter->second);
			break;
		}

	return crow::response(201);
}
