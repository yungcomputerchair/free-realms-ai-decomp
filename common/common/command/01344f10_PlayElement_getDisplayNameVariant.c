// addr: 0x01344f10
// name: PlayElement_getDisplayNameVariant
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * PlayElement_getDisplayNameVariant(void * this, int nameContext_) */

char * PlayElement_getDisplayNameVariant(void *this,int nameContext_)

{
  char *extraout_EAX;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  
                    /* Returns one of three display-name/string variants from the object's text
                       component at +0x44 based on nameContext values 1, 2, or 3. Used by card
                       formatting and phase dialog text. */
  if (this != (void *)0x1) {
    if (this == (void *)0x2) {
      CardPronounTable_getFeminine();
      return extraout_EAX_00;
    }
    if (this == (void *)0x3) {
      CardPronounTable_getNeutral();
      return extraout_EAX;
    }
  }
  CardPronounTable_getMasculine();
  return extraout_EAX_01;
}

