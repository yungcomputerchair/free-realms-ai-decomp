// addr: 0x013fa230
// name: StateMachineState_containsId70
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachineState_containsId70(void * this, int id_) */

bool __thiscall StateMachineState_containsId70(void *this,int id_)

{
  int *piVar1;
  int *piVar2;
  
                    /* Linearly searches the vector range at offsets +0x70..+0x74 for the supplied
                       id and returns whether it is present. Exact field meaning is not named. */
  piVar1 = *(int **)((int)this + 0x74);
  if (piVar1 < *(int **)((int)this + 0x70)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0x70);
  if (*(int **)((int)this + 0x74) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != id_)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)((int)this + 0x74);
  if (piVar1 < *(int **)((int)this + 0x70)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffff94) {
    FUN_00d83c2d();
  }
  return piVar2 != piVar1;
}

