// addr: 0x01356830
// name: FUN_01356830
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint get_play_element_id_checked(void * container, int iterator_) */

uint __thiscall get_play_element_id_checked(void *this,void *container,int iterator_)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* Returns the id of a PlayElement found through a checked container/iterator
                       path; exact owning class is not identifiable. */
  if (container == (void *)0x0) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = PlayElement_getId();
  piVar1 = *(int **)((int)this + 0x2e0);
  iVar3 = iVar2;
  if (piVar1 < *(int **)((int)this + 0x2dc)) {
    iVar3 = FUN_00d83c2d();
  }
  piVar4 = *(int **)((int)this + 0x2dc);
  if (*(int **)((int)this + 0x2e0) < piVar4) {
    iVar3 = FUN_00d83c2d();
  }
  for (; (piVar4 != piVar1 && (*piVar4 != iVar2)); piVar4 = piVar4 + 1) {
  }
  piVar1 = *(int **)((int)this + 0x2e0);
  if (piVar1 < *(int **)((int)this + 0x2dc)) {
    iVar3 = FUN_00d83c2d();
  }
  if (this == (void *)0xfffffd28) {
    iVar3 = FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),piVar4 != piVar1);
}

