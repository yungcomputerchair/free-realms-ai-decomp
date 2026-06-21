// addr: 0x014c4460
// name: LobbyCommand_GameServiceError_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void LobbyCommand_GameServiceError_debugPrint(void * this, void * out) */

void __thiscall LobbyCommand_GameServiceError_debugPrint(void *this,void *out)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char local_3ec [1000];
  uint local_4;
  
                    /* Debug-prints a game service error lobby command: group id, explanation
                       string, and a decoded error type. */
  local_4 = DAT_01b839d8 ^ (uint)local_3ec;
  FUN_01241650("GameServiceError Lobby Command\n",0x1f);
  AccountCommand_dump(this,out);
  _sprintf(local_3ec,"GroupID: %d\n",*(undefined4 *)((int)this + 0xc));
  pcVar3 = local_3ec;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_3ec,(int)pcVar3 - (int)(local_3ec + 1));
  FUN_01241650("Explanation: ",0xd);
  StdString_appendSubstring((int)this + 0x10,0,0xffffffff);
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 == 2) {
    uVar4 = 0x20;
    pcVar3 = "\nType of Error: Connection Error";
  }
  else if (iVar2 == 3) {
    uVar4 = 0x28;
    pcVar3 = "\nType of Error: Game Service Login Error";
  }
  else if (iVar2 == 4) {
    uVar4 = 0x27;
    pcVar3 = "\nType of Error: Game Lost Service Error";
  }
  else {
    uVar4 = 0x1d;
    pcVar3 = "\nType of Error: INVALID Error";
  }
  FUN_01241650(pcVar3,uVar4);
  return;
}

