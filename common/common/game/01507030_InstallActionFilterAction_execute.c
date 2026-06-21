// addr: 0x01507030
// name: InstallActionFilterAction_execute
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint InstallActionFilterAction_execute(void * this) */

uint __fastcall InstallActionFilterAction_execute(void *this)

{
  undefined4 extraout_EAX;
  undefined4 unaff_ESI;
  void *validActionFilter;
  
                    /* Executes an install-action-filter action: logs the install, touches the
                       filter handle, and releases/registers it on the Game. */
  Game_logGeneral(*(void **)((int)this + 0x30),"Installing ActionFilter.",unaff_ESI);
  validActionFilter = *(void **)((int)this + 0x124);
  EvaluationEnvironment_getGame((void *)((int)this + 0x84));
  Game_releaseValidActionFilterHandle(validActionFilter);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

