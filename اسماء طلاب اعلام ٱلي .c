#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Maximum length for names and registration number
#define MAX_NAME_LEN 30
#define MAX_REG_NUM_LEN 10

// Structure to hold student data
typedef struct {
    char registration_number[MAX_REG_NUM_LEN];
    char last_name[MAX_NAME_LEN];
    char first_name[MAX_NAME_LEN];
    int group_number; // The 'Fouj' number (1 to 8)
} Student;

// Function to convert a string to lowercase for case-insensitive comparison
void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// Function to compare strings, ignoring case
bool compare_names_case_insensitive(const char *name1, const char *name2) {
    char lower1[MAX_NAME_LEN];
    char lower2[MAX_NAME_LEN];

    // Create copies and convert to lowercase for comparison
    strcpy(lower1, name1);
    strcpy(lower2, name2);
    to_lowercase(lower1);
    to_lowercase(lower2);

    return (strcmp(lower1, lower2) == 0);
}

// Array to store all students from the 8 groups
#define MAX_STUDENTS 400
Student students[MAX_STUDENTS];
int student_count = 0;

// Function to add a student to the array
void add_student(const char* reg_num, const char* last, const char* first, int group) {
    if (student_count < MAX_STUDENTS) {
        strcpy(students[student_count].registration_number, reg_num);
        strcpy(students[student_count].last_name, last);
        strcpy(students[student_count].first_name, first);
        students[student_count].group_number = group;
        student_count++;
    }
}

// Function to populate the student array with data from the PDF
void load_student_data() {
    // --- Group 01 (Fouj 01)
    add_student("39475201", "AZEB CHIKΗ", "YOUNES", 1);
    add_student("39614017", "BELALOUI", "CHAHINAZ", 1);
    add_student("39418519", "BEN AMOR", "RADOUANE", 1);
    add_student("39422011", "BEN YOUCEF", "MOHAMMED", 1);
    add_student("39387804", "BIA", "AMMAR TAKI EDDINE", 1);
    add_student("39415905", "BOUHELAL", "ABDELDJABAR", 1);
    add_student("39393612", "CHIKHA", "TAHA AMINE", 1);
    add_student("39415204", "DJEDIDI", "SOUNDES", 1);
    add_student("39422114", "DJEDIDI", "OURIDA", 1);
    add_student("39393205", "DJEMIL", "HAIDAR", 1);
    add_student("39416120", "DOGHMANE", "WAEL ABDENNOUR", 1);
    add_student("39414414", "DOUAL", "QUALID", 1);
    add_student("39649412", "EL BARR", "DIYA EDDIN", 1);
    add_student("39403801", "GHILANI", "ABDENNOUR", 1);
    add_student("39386205", "GUENOUA", "AHMED KARIM", 1);
    add_student("39485201", "HAMIDATOU", "LARBI", 1);
    add_student("39399613", "HAMMANI", "NOUR", 1);
    add_student("39414420", "HOMCI", "YASSINE", 1);
    add_student("39431311", "HOURI", "RADHIA", 1);
    add_student("39404019", "KENIQUA", "MOHAMMED", 1);
    add_student("39429019", "KERTIOU", "AHMED RAMI", 1);
    add_student("39422416", "LABIDI", "YOUCEF ISLAM", 1);
    add_student("39405607", "LASSQUED", "DOUAA", 1);
    add_student("39422002", "LEHOUEDJ", "KARIMA", 1);
    add_student("39438615", "MAAMIR", "MOHAMMED IYAD", 1);
    add_student("39494518", "MEBARKI", "ABD ELBADIA", 1);
    add_student("39614511", "MILOUDI", "MERYEM ELBATOUL", 1);
    add_student("39458112", "NECIB", "SOUHAILA", 1);
    add_student("39439701", "NOGHAG", "AYA", 1);
    add_student("39439303", "OMANE", "REKIA", 1);
    add_student("39492310", "OUAKOUAK", "MOUTASSEM BILLAH", 1);
    add_student("39413716", "REKIBTI", "ABDENNOUR", 1);
    add_student("39622201", "SAIM", "ABDALLAH", 1);
    add_student("39442307", "TAMMA", "DJOUHAINA", 1);
    add_student("39574205", "TIDJANI", "QUAFA", 1);
    add_student("39637905", "TRYA", "MOHAMED NADIR", 1);
    add_student("39422412", "ZABOUN", "MAHMOUD", 1);
    add_student("39389612", "تواوة", "عبد الباسط", 1);

    // --- Group 02 (Fouj 02)
    add_student("39419617", "ABBASSI", "ABDELOUAHED", 2);
    add_student("39387706", "AMOURI", "ABDELKRIM", 2);
    add_student("39618203", "AQUADI", "DEKRA", 2);
    add_student("39402407", "AYADI", "IBRAHIM", 2);
    add_student("39421618", "BELHADI", "BRAHIM", 2);
    add_student("39414407", "BEN MOUSSA", "ACHRAF NOUR ELYAKIN", 2);
    add_student("39422407", "BENNACER", "ABDELAZIZ", 2);
    add_student("39628518", "BENYOUCEF", "FERIAL", 2);
    add_student("39430205", "BERCHAOUA", "ABDECHAFI KHALIL", 2);
    add_student("39435601", "BERIBECHE", "SADJIDA", 2);
    add_student("39622012", "BETTAHAR", "SABAH", 2);
    add_student("39445205", "BILAL", "EL MOTAZ BILLAH", 2);
    add_student("39622207", "BOUCHEMAL", "AISSA", 2);
    add_student("39395408", "BOUZEGHAYA", "ILIES", 2);
    add_student("39641210", "CHETTI", "Mohamed hicham", 2);
    add_student("39409918", "FERHAT", "ABDERRAOUF", 2);
    add_student("39419613", "GHAZI", "SALAH", 2);
    add_student("39422802", "GHERBI", "AHMED SLIMANE", 2);
    add_student("39404314", "HAFOUDA", "MESTOUR", 2);
    add_student("39403716", "HOGGUI", "ABDELMADJID", 2);
    add_student("39394112", "KHAMMES", "MOSBAH", 2);
    add_student("39613702", "KHETTA", "HOCINE", 2);
    add_student("39486413", "LACHRAF", "RADJA", 2);
    add_student("39622516", "LALMI", "MALIKA", 2);
    add_student("39431303", "LAQUID", "AYOUB", 2);
    add_student("39404915", "LEGMAIRI", "YOUCEF", 2);
    add_student("39630210", "MANANE", "WARDA", 2);
    add_student("39413803", "MEHAYECH", "ALI", 2);
    add_student("39445614", "NECIB", "DHIA EL HAK", 2);
    add_student("39420403", "REDOUANI", "HAIFA", 2);
    add_student("39404812", "REZZAG BARA", "QUASSIM", 2);
    add_student("39471316", "SAADAOUI", "AFRA", 2);
    add_student("39408009", "SEGHIERI", "AMIRA", 2);
    add_student("39429603", "TANNECHE", "HANANE", 2);
    add_student("39430612", "TANNECHE", "MAHMOUD", 2);
    add_student("39431804", "TLILI", "DRIS", 2);
    add_student("39640508", "ZEGHIDI", "NOUSSAIBA", 2);

    // --- Group 03 (Fouj 03)
    add_student("39415206", "ABID", "YASSINE", 3);
    add_student("39429302", "AHMEDSALAH", "NOURELISLAM", 3);
    add_student("39441511", "AMMARI", "CHIMAA", 3);
    add_student("39414317", "AZZAQUI", "AHMED NAZIM", 3);
    add_student("39452807", "BADI", "MOUSSA", 3);
    add_student("39445011", "BEN CHAIEB", "AROUA", 3);
    add_student("39410705", "BEN KHALIFA", "QUAIL", 3);
    add_student("39387607", "BEN MOUSSA", "ABDELHAMID", 3);
    add_student("39076627", "BENGLIA", "AMARA", 3);
    add_student("39470407", "BENINE", "SAFA", 3);
    add_student("39615115", "BENNOUNA", "MAROUA", 3);
    add_student("39636413", "BENNOUNA", "GHADA", 3);
    add_student("39406509", "BERREHOUMA", "MANAL", 3);
    add_student("39392715", "BOUGHEZALA", "AHMED SALEM", 3);
    add_student("39410606", "BOULOUSSA", "NOUR ELHOUDA", 3);
    add_student("39447117", "BOURAS", "KHADIDJA", 3);
    add_student("39445306", "CHABANI", "DJABER ABDELOUADOUI", 3);
    add_student("39491514", "CHETEHOUNA", "QUAIL", 3);
    add_student("39410317", "DEBBAR", "Mohammed abde chahid", 3);
    add_student("39640708", "DJEROUNI", "SOUHEYL", 3);
    add_student("39394914", "DOU", "ALI", 3);
    add_student("39649410", "FDOL", "CHAHD", 3);
    add_student("39402811", "FERDJANI", "MARQUA", 3);
    add_student("39425009", "GUERRAH", "AHMED", 3);
    add_student("39649401", "GUIDOUM", "OUMEIMA", 3);
    add_student("39435911", "HAMIED", "MOHAMMED LAMJAD", 3);
    add_student("39392913", "LEBZIZ", "AHMED AMINE", 3);
    add_student("39637702", "MAROUFI", "TAHANI", 3);
    add_student("39475701", "MERAD", "AICHA", 3);
    add_student("39418908", "MOSTEFAQUI", "MOHAMED AYOUB", 3);
    add_student("39491915", "NEMSI", "YOUCEF", 3);
    add_student("39469407", "RAHAL", "RAYENE", 3);
    add_student("39458201", "SAHRAQUI", "DHIA EDDINE", 3);
    add_student("39399608", "SASSI", "NESRINE", 3);
    add_student("39431302", "SERHOUD", "QUAIS", 3);
    add_student("39471417", "TIR", "ALI", 3);
    add_student("39451909", "TRAD", "CHOAYEB", 3);

    // --- Group 04 (Fouj 04)
    add_student("39449109", "ARIGUE", "HIBAT ERRAHMANE", 4);
    add_student("39415003", "BEGGAS", "RAMI", 4);
    add_student("39398412", "BELAID", "EL MOSSADDEK BELLAH", 4);
    add_student("39425512", "BELHADI", "LOUAI", 4);
    add_student("39430212", "BEN NACEUR", "ABDALLAH EL MORTAJA", 4);
    add_student("39430415", "CFEFFAH", "LINA", 4);
    add_student("39403206", "CHAIE", "ZAKARIA", 4);
    add_student("39414401", "DADDA", "HANA", 4);
    add_student("39431913", "DEROUICHE", "GAMRA", 4);
    add_student("39415603", "DOGHMANE", "LOUAI ABDERRAHMANE", 4);
    add_student("39644420", "FEKHAR", "AICHA", 4);
    add_student("39442211", "FERDJANI", "BAYANE", 4);
    add_student("39451809", "FETHIZA ALI", "RIHAB", 4);
    add_student("39634905", "GASMI", "RAHMA", 4);
    add_student("39442109", "GHEDEIR AHMED", "SLIMANE", 4);
    add_student("39451917", "GHEMAM AMARA", "ABDELBARI", 4);
    add_student("39402515", "HAFOUDA", "BAHAEDDINE", 4);
    add_student("39387708", "HARZOULI", "ABDELLATIF", 4);
    add_student("39422619", "KECHEHA", "YOUSRA", 4);
    add_student("39395506", "KHALDI", "ABDESSAMAD", 4);
    add_student("39419101", "LAHEG", "", 4); // Name is missing in the source
    add_student("39413206", "LEMMADI", "FAROUK RAHMA", 4);
    add_student("39432008", "MECHRI", "NACIRA", 4);
    add_student("39431315", "MEFTAH", "ZIAD", 4);
    add_student("39414511", "MESBAHI", "YOUNES", 4);
    add_student("39425404", "MESSAOLUDI", "KHALED", 4);
    add_student("39470602", "NANI", "TAHA OTHMANE", 4);
    add_student("39643111", "NETTICHE", "TAHANI", 4);
    add_student("39643806", "OGBI", "LODJINE", 4);
    add_student("39434818", "OTMANI", "ENNOURI", 4);
    add_student("39425303", "RAMDANI", "ROUDAINA", 4);
    add_student("39399409", "REZGA", "MOHAMMED AMER", 4);
    add_student("39395516", "SADANI", "MOHAMMED SEDDIK", 4);
    add_student("39440111", "SEBOUAL", "AMIRA", 4);
    add_student("39412909", "SENIGRA", "BILAL", 4);
    add_student("39472317", "SLIMANI", "MOHAMMED", 4);
    add_student("39494420", "ZAOUCHE", "ZAID", 4);

    // --- Group 05 (Fouj 05)
    add_student("39445304", "ABADI", "TAKI EDDINE", 5);
    add_student("39386909", "ABDALLAOUI", "HANINE", 5);
    add_student("39458307", "ABED SAAD", "MARIEM", 5);
    add_student("39634620", "ADAMOU", "TASNIM ALAERRAHMANE", 5);
    add_student("39443006", "AGUIEB", "HOUSSAM", 5);
    add_student("39614606", "AHMIMID", "MOUNDHIR", 5);
    add_student("39635812", "ARIBI", "MAISSA", 5);
    add_student("39416401", "BEDIDA", "AHMED", 5);
    add_student("39452609", "BEKAKRA", "SOMAIA", 5);
    add_student("39491506", "BEKKARI", "HAITHAM ABDERRAZAK", 5);
    add_student("39599008", "BENAQUN", "HARETH", 5);
    add_student("39415708", "BENNACEUR", "MOHAMMED SADOK", 5);
    add_student("39405720", "BOUZAINE", "TAHA AMINE", 5);
    add_student("39394003", "CHELALGA", "Mohammed akram", 5);
    add_student("39402406", "DEROUICHE", "IBRAHIM", 5);
    add_student("39409108", "FERDJANI", "AHMED", 5);
    add_student("39407616", "GHENAIM", "RACHID", 5);
    add_student("39403219", "GHERBI", "ZINER", 5);
    add_student("39634907", "GHIABA", "RAZIKA", 5);
    add_student("39446603", "HADJ AMMAR", "MOHAMMED", 5);
    add_student("39386811", "HAMAIDI", "DJOUHAUNA", 5);
    add_student("39395910", "HASANI", "ABD ELMOUHAIMENE", 5);
    add_student("39398416", "HENNI", "MEBARKA", 5);
    add_student("39492718", "KADDOURI", "MAROUA", 5);
    add_student("39415603", "KHELIL", "MOHAMMED EL HADI", 5);
    add_student("39393420", "KHEMIDA", "SAKINA", 5);
    add_student("39412418", "KOUIDI", "AHMED TAYEB", 5);
    add_student("39651802", "LAMOURI", "INAS", 5);
    add_student("39379607", "MECHERI", "MOHAMMED", 5);
    add_student("39430109", "MERAGHNI", "AMER", 5);
    add_student("39494303", "MERAGHNI", "INES", 5);
    add_student("39436101", "MESAI AOUN", "NOUR EL OUEDJOUD", 5);
    add_student("39405110", "MEZOUAR", "ZAHRA", 5);
    add_student("39401220", "REGUEA", "ALI", 5);
    add_student("39414703", "REHOUMA", "ELHADJ MESSAOUD", 5);
    add_student("39368207", "SAKER", "YOUCEF TAHER", 5);
    add_student("39430406", "TLILI", "FARHAT", 5);
    add_student("39414806", "YOUMBAI", "NOURA ELHOUDA", 5);
    add_student("39637719", "ZEHANI", "SAWSEN", 5);

    // --- Group 06 (Fouj 06)
    add_student("39428906", "ABADI", "ABDELKADER", 6);
    add_student("39492419", "AHMEDI", "RAYENE", 6);
    add_student("39405311", "ATAYALLAH", "MOHAMMED LAID", 6);
    add_student("39435709", "ATIA", "ABDELBADI", 6);
    add_student("39459903", "AZIZI", "OUMAIMA", 6);
    add_student("39484708", "BELAIDI", "INES YASMINE", 6);
    add_student("39415802", "BELHADI", "AMNA", 6);
    add_student("39386417", "BEN MOUSSA", "AYMEN ELMEHDI", 6);
    add_student("39634918", "BENSEGHIER", "RAOUNAK", 6);
    add_student("39429015", "BERHOUM", "AHMED AMINE", 6);
    add_student("39614610", "BOUHAFS", "NADJAH", 6);
    add_student("39647708", "BOULIF", "MOSBAHABDESSAMAI", 6);
    add_student("39409709", "BOURAS", "SARA", 6);
    add_student("39394904", "CHEBROU", "AHMED ABDELLATIF", 6);
    add_student("39388517", "DJABER", "NOUR EL HOUDA", 6);
    add_student("39462807", "DOU", "CHOUAIB", 6);
    add_student("39386707", "FERDJANI", "AYAT ERRAHMANE", 6);
    add_student("34170418", "GATTAL", "ABDERAHMANE", 6);
    add_student("39493902", "GHEDEIR AHMED", "SLIMANE", 6);
    add_student("39435218", "GHEMAM AMARA", "ABDELLALI", 6);
    add_student("39435605", "GHEMEM AMARA", "HAITHEM", 6);
    add_student("39405101", "HABITA", "AMINA", 6);
    add_student("39662312", "HICHER", "MALAK ALA ERRAHMENE", 6);
    add_student("39402720", "KENIQUA", "TASNIM", 6);
    add_student("39401705", "KINA", "IKRAM", 6);
    add_student("39618405", "LAHREM", "LAMIS", 6);
    add_student("39492709", "LARIBI", "MOHAMED BACHIR", 6);
    add_student("39402106", "MEDJOUEL", "ABDELKAFI", 6);
    add_student("39415510", "MESBAHI", "RAFIK", 6);
    add_student("39392706", "MIHI", "AYA", 6);
    add_student("39435411", "NOUBLI", "MARAM", 6);
    add_student("39446410", "REGUIG", "MOUHANED", 6);
    add_student("39432202", "SAHRA", "FERDAOUS", 6);
    add_student("39415912", "SAHRAQUI", "MALAK", 6);
    add_student("39661315", "SAIDI", "SAIDA", 6);
    add_student("39388216", "SAYAH", "MOURAD", 6);
    add_student("39424714", "SOUID", "IBRAHIM", 6);
    add_student("39414006", "ZEGHOUD", "MOHAMMED", 6);
    add_student("39405106", "ZIDANE", "OUSSAMA", 6);

    // --- Group 07 (Fouj 07)
    add_student("39429420", "AYACHI", "BAHIA", 7);
    add_student("39439105", "BADEREDDINE", "QUALID", 7);
    add_student("39446512", "BEKAKRA", "RAOUDHA", 7);
    add_student("39388316", "BELLA BACI", "MALAK", 7);
    add_student("39426017", "BEN KHALIFA", "MOHAMMED RABEI", 7);
    add_student("39403619", "BEN MOUSSA", "ABDEL AZIZ", 7);
    add_student("39448605", "BENZINE", "INAS", 7);
    add_student("39430608", "BERIBECHE", "MOHAMMED NIZAR", 7);
    add_student("39425306", "BOUTA", "RAYANE", 7);
    add_student("39430208", "CHAR", "ABDELAZIZ", 7);
    add_student("39439107", "CHARFI", "YAKOUB", 7);
    add_student("39455612", "DAHMANI", "MOATEZ BELLAH", 7);
    add_student("39429608", "DOUDI", "RAHMA", 7);
    add_student("39636405", "GHIAT", "RAYHANE", 7);
    add_student("39411713", "GUEMARI", "MOHAMMED", 7);
    add_student("31038718", "HAMMADI", "ABDELKADER", 7);
    add_student("39392811", "HAMTINE", "AMIRA", 7);
    add_student("39438614", "KHATARA", "MOHAMMED AYOUB", 7);
    add_student("39410105", "KRIEM", "AISSA", 7);
    add_student("39402503", "LAHZIEL", "ICHRAK", 7);
    add_student("39446202", "LEJDEL ALI", "THOURAIA", 7);
    add_student("39405307", "MAAMIR", "MOHAMMED", 7);
    add_student("39614403", "MAMMERI", "MOHAMMED ELAMINE", 7);
    add_student("39419620", "MANSOURI BOURKA", "MOHAMMED EL HABIB", 7);
    add_student("39398910", "MEGA", "SEIF EDDINE", 7);
    add_student("39449105", "MESSAI AOUN", "NACERALLAH", 7);
    add_student("39453003", "MOUSSAOUI", "OURIDA", 7);
    add_student("39475117", "QUAFA", "ADOUKA", 7);
    add_student("39438805", "RACHEDI", "HIBATALLAH", 7);
    add_student("39439410", "REGGANI", "MOULAY SAAID", 7);
    add_student("39431406", "SADANI", "MOHAMMED", 7);
    add_student("39435119", "SEGUENI", "ASMA", 7);
    add_student("39592012", "TIDIANI", "HASNA", 7);
    add_student("34170404", "TOUAHRIA", "SIHAM", 7);
    add_student("39419118", "TOUAQUA", "MOHAMMED SALAH", 7);
    add_student("39395203", "TRIKI", "ASMA", 7);
    add_student("39442207", "TRIKI", "BARAA EDDINE", 7);
    add_student("39431407", "YOUMBAI", "MOHAMMED BACHIR", 7);
    add_student("39446605", "ZEGUEB", "MOHAMMED ALI", 7);

    // --- Group 08 (Fouj 08)
    add_student("39432605", "ABADOU", "FARID", 8);
    add_student("39471609", "AHMED HEZAM", "GHOUZLANE", 8);
    add_student("39439305", "AHMOUDA", "ZAKARIA ABDELAZIZ", 8);
    add_student("39413508", "ALIA", "CHEIMA", 8);
    add_student("39401720", "ARBIA", "TAKOUA", 8);
    add_student("39409111", "BADI", "AHMED RAMI", 8);
    add_student("38062107", "BEKHELFA", "WISSAM", 8);
    add_student("39558409", "BENAGGA", "HIBATOUARRAHMANE", 8);
    add_student("39613404", "BOUKHALFA", "ANES ABDELOUAHAB", 8);
    add_student("39429613", "BOUTA", "FARES", 8);
    add_student("39422005", "CHENIBA AΤΙΑ", "LAMINE", 8);
    add_student("39403613", "CHERRAD", "ABDERRAHIM", 8);
    add_student("39439101", "DIERAD", "MOHAMMED FOUDHIL", 8);
    add_student("39449512", "GHOUINI", "MANAR", 8);
    add_student("37285307", "GUERFI", "ISRA", 8);
    add_student("39415417", "HADRI", "ALI", 8);
    add_student("39403502", "HASASSA", "CHAKIB", 8);
    add_student("39412602", "KAIDAR", "AMIRA", 8);
    add_student("39430702", "KECHIDA", "MERIEM", 8);
    add_student("39394002", "KHAMMES", "MOHAMMED", 8);
    add_student("39438714", "KHATRAOUI", "NARDIAS", 8);
    add_student("39474202", "KHELIF", "QUALID", 8);
    add_student("39402513", "KHOUAZEM", "BRAHIM", 8);
    add_student("39451905", "LEMMOUCHI", "SONDES", 8);
    add_student("39600408", "LIMANE", "HIBAT ALLAH", 8);
    add_student("39455918", "MECHERI", "MANAL", 8);
    add_student("39431603", "MEHELLOU", "ANES", 8);
    add_student("39432515", "MEHELLOU", "RIDHA", 8);
    add_student("39362406", "MENACHUR", "YAMINA", 8);
    add_student("39402401", "MERIGA", "AYMEN", 8);
    add_student("39476603", "MIDA", "BILAL", 8);
    add_student("39413401", "NAIMI", "CERINE", 8);
    add_student("39446014", "OTMANI", "MAFAZ", 8);
    add_student("39425403", "REGOUTA", "BILAL", 8);
    add_student("39393419", "SOLTANI", "SOUFIANE", 8);
    add_student("39429414", "TEDJANI", "ILYES", 8);
    add_student("39489617", "TERCHA", "MOHAMMED", 8);
    add_student("39643009", "ZEGHIDI", "ISLAM", 8);
    add_student("39475801", "علوش", "", 8); // First name is missing in the source
}

// Function to search for a student by first name or last name
void search_student() {
    char search_name[MAX_NAME_LEN];
    bool found = false;

    printf("\n--- Student Search ---\n");
    printf("Enter student's First Name or Last Name: ");
    if (fgets(search_name, MAX_NAME_LEN, stdin) == NULL) return;
    search_name[strcspn(search_name, "\n")] = 0; // Remove newline

    printf("\nSearch Results:\n");
    printf("---------------\n");

    for (int i = 0; i < student_count; i++) {
        if (compare_names_case_insensitive(students[i].first_name, search_name) ||
            compare_names_case_insensitive(students[i].last_name, search_name)) {
            
            printf("Registration Number: %s\n", students[i].registration_number);
            printf("Last Name: %s\n", students[i].last_name);
            printf("First Name: %s\n", students[i].first_name);
            printf("Group Number: %d\n", students[i].group_number);
            printf("---------------\n");
            found = true;
        }
    }

    if (!found) {
        printf("No student found with the name: %s\n", search_name);
    }
}

// Function to display all students in a specific group
void display_group_students() {
    int group;
    bool found = false;

    printf("\n--- Display Group Students ---\n");
    printf("Enter group number (1-8): ");
    scanf("%d", &group);
    getchar(); // Consume newline character

    if (group < 1 || group > 8) {
        printf("Invalid group number! Please enter a number between 1 and 8.\n");
        return;
    }

    printf("\nStudents in Group %d:\n", group);
    printf("---------------\n");

    for (int i = 0; i < student_count; i++) {
        if (students[i].group_number == group) {
            printf("Registration Number: %s\n", students[i].registration_number);
            printf("Last Name: %s\n", students[i].last_name);
            printf("First Name: %s\n", students[i].first_name);
            printf("---------------\n");
            found = true;
        }
    }

    if (!found) {
        printf("No students found in group %d\n", group);
    }
}

// Main function with menu
int main() {
    int choice;

    // Load student data
    load_student_data();

    printf("=== Student Management System ===\n");

    do {
        printf("\nMenu:\n");
        printf("1. Search student by name\n");
        printf("2. Display all students in a group\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                search_student();
                break;
            case 2:
                display_group_students();
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}