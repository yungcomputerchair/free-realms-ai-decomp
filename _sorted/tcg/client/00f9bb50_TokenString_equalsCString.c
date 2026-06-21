// addr: 0x00f9bb50
// name: TokenString_equalsCString
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TokenString_equalsCString(void * tokenString, char * text) */

bool __cdecl TokenString_equalsCString(void *tokenString,char *text)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
                    /* Compares a token/string object's text against a C string by measuring the
                       literal and calling the string comparison helper, returning true when equal.
                       It is used by CardClient_ctor to match realm tokens like livetest,
                       frscg_main, frscg_qa and stage. */
  pcVar2 = text;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00f942a0(0,*(undefined4 *)((int)tokenString + 0x14),text,(int)pcVar2 - (int)(text + 1)
                      );
  return (bool)('\x01' - (iVar3 != 0));
}

