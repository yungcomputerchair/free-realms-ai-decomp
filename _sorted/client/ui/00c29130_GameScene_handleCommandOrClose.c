// addr: 0x00c29130
// name: GameScene_handleCommandOrClose
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameScene_handleCommandOrClose(void * command) */

int __cdecl GameScene_handleCommandOrClose(void *command)

{
  int iVar1;
  void *pvVar2;
  
                    /* If the command has one argument, resolves/uses that argument; otherwise finds
                       the GameScene UI object, then calls a close/trigger helper when a target is
                       available. Always returns 0. */
  iVar1 = FUN_00e3a390(command);
  if (iVar1 == 1) {
    pvVar2 = (void *)FUN_00c28980(command,1);
  }
  else {
    pvVar2 = GuiObjectRegistry_findGuiSurfaceCtrl("GameScene");
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00406607(0);
  }
  return 0;
}

