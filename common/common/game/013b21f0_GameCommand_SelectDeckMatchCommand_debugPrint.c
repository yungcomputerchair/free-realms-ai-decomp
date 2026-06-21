// addr: 0x013b21f0
// name: GameCommand_SelectDeckMatchCommand_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GameCommand_SelectDeckMatchCommand_debugPrint(void * this, void *
   printer) */

void __thiscall GameCommand_SelectDeckMatchCommand_debugPrint(void *this,void *printer)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_414 [4];
  void *local_410;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Debug-prints a Select Deck Match Command, including the inherited match id
                       and deck id string. */
  puStack_8 = &LAB_0168780b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_414;
  ExceptionList = &local_c;
  local_3fc = 0xf;
  local_400 = 0;
  local_410 = (void *)((uint)local_410 & 0xffffff00);
  local_4 = 0;
  FUN_01241650("Select Deck Match Command\n",0x1a);
  GameCommand_MatchCommand_debugPrint(this,printer);
  if (*(uint *)((int)this + 0x24) < 0x10) {
    iVar3 = (int)this + 0x10;
  }
  else {
    iVar3 = *(int *)((int)this + 0x10);
  }
  _sprintf(local_3f8,"DeckID: %s\n",iVar3);
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

