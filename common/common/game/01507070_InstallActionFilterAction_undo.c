// addr: 0x01507070
// name: InstallActionFilterAction_undo
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint InstallActionFilterAction_undo(void * this) */

uint __fastcall InstallActionFilterAction_undo(void *this)

{
  void *this_00;
  undefined4 extraout_EAX;
  undefined4 unaff_ESI;
  void *validActionFilter;
  
                    /* Undoes an installed action filter: logs the undo, touches the filter handle,
                       and erases it from the Game valid-action-filter set. */
  Game_logGeneral(*(void **)((int)this + 0x30),"undoing InstallActionFilter",unaff_ESI);
  validActionFilter = *(void **)((int)this + 0x124);
  this_00 = EvaluationEnvironment_getGame((void *)((int)this + 0x84));
  Game_eraseValidActionFilter(this_00,validActionFilter);
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

