// addr: 0x014b3120
// name: MatchCommand_SetDeckArchetype_dump
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MatchCommand_SetDeckArchetype_dump(void * this, void * out) */

void __thiscall MatchCommand_SetDeckArchetype_dump(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes a debug/text dump of the MatchCommand_SetDeckArchetype command,
                       including deck archetype. Evidence is the command banner and field format
                       strings in the function. */
  puStack_8 = &LAB_016a762b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_414;
  ExceptionList = &local_c;
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  local_4 = 0;
  FUN_01241650("Set Deck Archetype Match Command\n",0x21);
  GameCommand_MatchCommand_debugPrint(this,out);
  _sprintf(local_3f8,"Deck Archetype: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar2 = local_3f8;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
  local_4 = 0xffffffff;
  if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_410);
  }
  ExceptionList = local_c;
  return;
}

