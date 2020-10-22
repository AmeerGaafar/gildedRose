

//#include "../src/GildedRose.h"
#include "../src/GildedRose.cc"
#include "gtest/gtest.h"

using namespace std;

char const *idealOutput="-------- day 0 --------\nname, sellIn, quality\n+5 Dexterity Vest, 10, 20\nAged Brie, 2, 0\nElixir of the Mongoose, 5, 7\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 15, 20\nBackstage passes to a TAFKAL80ETC concert, 10, 49\nBackstage passes to a TAFKAL80ETC concert, 5, 49\nConjured Mana Cake, 3, 6\n\n-------- day 1 --------\nname, sellIn, quality\n+5 Dexterity Vest, 9, 19\nAged Brie, 1, 1\nElixir of the Mongoose, 4, 6\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 14, 21\nBackstage passes to a TAFKAL80ETC concert, 9, 50\nBackstage passes to a TAFKAL80ETC concert, 4, 50\nConjured Mana Cake, 2, 5\n\n-------- day 2 --------\nname, sellIn, quality\n+5 Dexterity Vest, 8, 18\nAged Brie, 0, 2\nElixir of the Mongoose, 3, 5\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 13, 22\nBackstage passes to a TAFKAL80ETC concert, 8, 50\nBackstage passes to a TAFKAL80ETC concert, 3, 50\nConjured Mana Cake, 1, 4\n\n-------- day 3 --------\nname, sellIn, quality\n+5 Dexterity Vest, 7, 17\nAged Brie, -1, 4\nElixir of the Mongoose, 2, 4\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 12, 23\nBackstage passes to a TAFKAL80ETC concert, 7, 50\nBackstage passes to a TAFKAL80ETC concert, 2, 50\nConjured Mana Cake, 0, 3\n\n-------- day 4 --------\nname, sellIn, quality\n+5 Dexterity Vest, 6, 16\nAged Brie, -2, 6\nElixir of the Mongoose, 1, 3\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 11, 24\nBackstage passes to a TAFKAL80ETC concert, 6, 50\nBackstage passes to a TAFKAL80ETC concert, 1, 50\nConjured Mana Cake, -1, 1\n\n-------- day 5 --------\nname, sellIn, quality\n+5 Dexterity Vest, 5, 15\nAged Brie, -3, 8\nElixir of the Mongoose, 0, 2\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 10, 25\nBackstage passes to a TAFKAL80ETC concert, 5, 50\nBackstage passes to a TAFKAL80ETC concert, 0, 50\nConjured Mana Cake, -2, 0\n\n-------- day 6 --------\nname, sellIn, quality\n+5 Dexterity Vest, 4, 14\nAged Brie, -4, 10\nElixir of the Mongoose, -1, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 9, 27\nBackstage passes to a TAFKAL80ETC concert, 4, 50\nBackstage passes to a TAFKAL80ETC concert, -1, 0\nConjured Mana Cake, -3, 0\n\n-------- day 7 --------\nname, sellIn, quality\n+5 Dexterity Vest, 3, 13\nAged Brie, -5, 12\nElixir of the Mongoose, -2, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 8, 29\nBackstage passes to a TAFKAL80ETC concert, 3, 50\nBackstage passes to a TAFKAL80ETC concert, -2, 0\nConjured Mana Cake, -4, 0\n\n-------- day 8 --------\nname, sellIn, quality\n+5 Dexterity Vest, 2, 12\nAged Brie, -6, 14\nElixir of the Mongoose, -3, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 7, 31\nBackstage passes to a TAFKAL80ETC concert, 2, 50\nBackstage passes to a TAFKAL80ETC concert, -3, 0\nConjured Mana Cake, -5, 0\n\n-------- day 9 --------\nname, sellIn, quality\n+5 Dexterity Vest, 1, 11\nAged Brie, -7, 16\nElixir of the Mongoose, -4, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 6, 33\nBackstage passes to a TAFKAL80ETC concert, 1, 50\nBackstage passes to a TAFKAL80ETC concert, -4, 0\nConjured Mana Cake, -6, 0\n\n-------- day 10 --------\nname, sellIn, quality\n+5 Dexterity Vest, 0, 10\nAged Brie, -8, 18\nElixir of the Mongoose, -5, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 5, 35\nBackstage passes to a TAFKAL80ETC concert, 0, 50\nBackstage passes to a TAFKAL80ETC concert, -5, 0\nConjured Mana Cake, -7, 0\n\n-------- day 11 --------\nname, sellIn, quality\n+5 Dexterity Vest, -1, 8\nAged Brie, -9, 20\nElixir of the Mongoose, -6, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 4, 38\nBackstage passes to a TAFKAL80ETC concert, -1, 0\nBackstage passes to a TAFKAL80ETC concert, -6, 0\nConjured Mana Cake, -8, 0\n\n-------- day 12 --------\nname, sellIn, quality\n+5 Dexterity Vest, -2, 6\nAged Brie, -10, 22\nElixir of the Mongoose, -7, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 3, 41\nBackstage passes to a TAFKAL80ETC concert, -2, 0\nBackstage passes to a TAFKAL80ETC concert, -7, 0\nConjured Mana Cake, -9, 0\n\n-------- day 13 --------\nname, sellIn, quality\n+5 Dexterity Vest, -3, 4\nAged Brie, -11, 24\nElixir of the Mongoose, -8, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 2, 44\nBackstage passes to a TAFKAL80ETC concert, -3, 0\nBackstage passes to a TAFKAL80ETC concert, -8, 0\nConjured Mana Cake, -10, 0\n\n-------- day 14 --------\nname, sellIn, quality\n+5 Dexterity Vest, -4, 2\nAged Brie, -12, 26\nElixir of the Mongoose, -9, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 1, 47\nBackstage passes to a TAFKAL80ETC concert, -4, 0\nBackstage passes to a TAFKAL80ETC concert, -9, 0\nConjured Mana Cake, -11, 0\n\n-------- day 15 --------\nname, sellIn, quality\n+5 Dexterity Vest, -5, 0\nAged Brie, -13, 28\nElixir of the Mongoose, -10, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, 0, 50\nBackstage passes to a TAFKAL80ETC concert, -5, 0\nBackstage passes to a TAFKAL80ETC concert, -10, 0\nConjured Mana Cake, -12, 0\n\n-------- day 16 --------\nname, sellIn, quality\n+5 Dexterity Vest, -6, 0\nAged Brie, -14, 30\nElixir of the Mongoose, -11, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -1, 0\nBackstage passes to a TAFKAL80ETC concert, -6, 0\nBackstage passes to a TAFKAL80ETC concert, -11, 0\nConjured Mana Cake, -13, 0\n\n-------- day 17 --------\nname, sellIn, quality\n+5 Dexterity Vest, -7, 0\nAged Brie, -15, 32\nElixir of the Mongoose, -12, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -2, 0\nBackstage passes to a TAFKAL80ETC concert, -7, 0\nBackstage passes to a TAFKAL80ETC concert, -12, 0\nConjured Mana Cake, -14, 0\n\n-------- day 18 --------\nname, sellIn, quality\n+5 Dexterity Vest, -8, 0\nAged Brie, -16, 34\nElixir of the Mongoose, -13, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -3, 0\nBackstage passes to a TAFKAL80ETC concert, -8, 0\nBackstage passes to a TAFKAL80ETC concert, -13, 0\nConjured Mana Cake, -15, 0\n\n-------- day 19 --------\nname, sellIn, quality\n+5 Dexterity Vest, -9, 0\nAged Brie, -17, 36\nElixir of the Mongoose, -14, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -4, 0\nBackstage passes to a TAFKAL80ETC concert, -9, 0\nBackstage passes to a TAFKAL80ETC concert, -14, 0\nConjured Mana Cake, -16, 0\n\n-------- day 20 --------\nname, sellIn, quality\n+5 Dexterity Vest, -10, 0\nAged Brie, -18, 38\nElixir of the Mongoose, -15, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -5, 0\nBackstage passes to a TAFKAL80ETC concert, -10, 0\nBackstage passes to a TAFKAL80ETC concert, -15, 0\nConjured Mana Cake, -17, 0\n\n-------- day 21 --------\nname, sellIn, quality\n+5 Dexterity Vest, -11, 0\nAged Brie, -19, 40\nElixir of the Mongoose, -16, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -6, 0\nBackstage passes to a TAFKAL80ETC concert, -11, 0\nBackstage passes to a TAFKAL80ETC concert, -16, 0\nConjured Mana Cake, -18, 0\n\n-------- day 22 --------\nname, sellIn, quality\n+5 Dexterity Vest, -12, 0\nAged Brie, -20, 42\nElixir of the Mongoose, -17, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -7, 0\nBackstage passes to a TAFKAL80ETC concert, -12, 0\nBackstage passes to a TAFKAL80ETC concert, -17, 0\nConjured Mana Cake, -19, 0\n\n-------- day 23 --------\nname, sellIn, quality\n+5 Dexterity Vest, -13, 0\nAged Brie, -21, 44\nElixir of the Mongoose, -18, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -8, 0\nBackstage passes to a TAFKAL80ETC concert, -13, 0\nBackstage passes to a TAFKAL80ETC concert, -18, 0\nConjured Mana Cake, -20, 0\n\n-------- day 24 --------\nname, sellIn, quality\n+5 Dexterity Vest, -14, 0\nAged Brie, -22, 46\nElixir of the Mongoose, -19, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -9, 0\nBackstage passes to a TAFKAL80ETC concert, -14, 0\nBackstage passes to a TAFKAL80ETC concert, -19, 0\nConjured Mana Cake, -21, 0\n\n-------- day 25 --------\nname, sellIn, quality\n+5 Dexterity Vest, -15, 0\nAged Brie, -23, 48\nElixir of the Mongoose, -20, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -10, 0\nBackstage passes to a TAFKAL80ETC concert, -15, 0\nBackstage passes to a TAFKAL80ETC concert, -20, 0\nConjured Mana Cake, -22, 0\n\n-------- day 26 --------\nname, sellIn, quality\n+5 Dexterity Vest, -16, 0\nAged Brie, -24, 50\nElixir of the Mongoose, -21, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -11, 0\nBackstage passes to a TAFKAL80ETC concert, -16, 0\nBackstage passes to a TAFKAL80ETC concert, -21, 0\nConjured Mana Cake, -23, 0\n\n-------- day 27 --------\nname, sellIn, quality\n+5 Dexterity Vest, -17, 0\nAged Brie, -25, 50\nElixir of the Mongoose, -22, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -12, 0\nBackstage passes to a TAFKAL80ETC concert, -17, 0\nBackstage passes to a TAFKAL80ETC concert, -22, 0\nConjured Mana Cake, -24, 0\n\n-------- day 28 --------\nname, sellIn, quality\n+5 Dexterity Vest, -18, 0\nAged Brie, -26, 50\nElixir of the Mongoose, -23, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -13, 0\nBackstage passes to a TAFKAL80ETC concert, -18, 0\nBackstage passes to a TAFKAL80ETC concert, -23, 0\nConjured Mana Cake, -25, 0\n\n-------- day 29 --------\nname, sellIn, quality\n+5 Dexterity Vest, -19, 0\nAged Brie, -27, 50\nElixir of the Mongoose, -24, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -14, 0\nBackstage passes to a TAFKAL80ETC concert, -19, 0\nBackstage passes to a TAFKAL80ETC concert, -24, 0\nConjured Mana Cake, -26, 0\n\n-------- day 30 --------\nname, sellIn, quality\n+5 Dexterity Vest, -20, 0\nAged Brie, -28, 50\nElixir of the Mongoose, -25, 0\nSulfuras, Hand of Ragnaros, 0, 80\nSulfuras, Hand of Ragnaros, -1, 80\nBackstage passes to a TAFKAL80ETC concert, -15, 0\nBackstage passes to a TAFKAL80ETC concert, -20, 0\nBackstage passes to a TAFKAL80ETC concert, -25, 0\nConjured Mana Cake, -27, 0\n\n";

void runForAMonth(char* output)
{
    int day;
    vector<Item> items;
    items.push_back(Item("+5 Dexterity Vest", 10, 20));
    items.push_back(Item("Aged Brie", 2, 0));
    items.push_back(Item("Elixir of the Mongoose", 5, 7));
    items.push_back(Item("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(Item("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 5, 49));
    // this Conjured item doesn't yet work properly
    items.push_back(Item("Conjured Mana Cake", 3, 6));

    GildedRose app(items);

    for (day = 0; day <= 30; day++)
    {
        char lineOut[255] = "";
        sprintf(lineOut,"-------- day %d --------\n", day); strcat(output,lineOut);
        sprintf(lineOut,"name, sellIn, quality\n"); strcat(output,lineOut);
        for (vector<Item>::iterator anItem = items.begin(); anItem != items.end(); anItem++) {

            sprintf(lineOut,"%s, %d, %d\n", anItem->name.c_str(), anItem->sellIn, anItem->quality);
            strcat(output,lineOut);
        }

        strcat(output,"\n");

        app.updateQuality();
    }
}

TEST(characterization,monthRun)
{
    char output[0x8000]="";

    runForAMonth(output);
    EXPECT_STREQ(idealOutput,output);
}