// addr: 0x0095cac0
// name: PlayerCameraEffectEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerCameraEffectEvent_ctor(void * this) */

void * __thiscall PlayerCameraEffectEvent_ctor(void *this)

{
  int iVar1;
  int *in_stack_00000010;
  undefined1 *puStack00000014;
  undefined1 local_28 [12];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayerCameraEffectEvent from PlayerEffectEvent and
                       stores/refcounts a resource pointer. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015955e8;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  puStack00000014 = local_28;
  PlayerEffectEvent_ctor(this);
  local_4 = 0;
  *(undefined ***)this = PlayerCameraEffectEvent::vftable;
  *(undefined ***)((int)this + 0x50) = PlayerCameraEffectEvent::vftable;
  *(int **)((int)this + 0xa0) = in_stack_00000010;
  iVar1 = in_stack_00000010[2];
  in_stack_00000010[2] = iVar1 + 1;
  if (iVar1 == 0) {
    uStack_1c = 0x95cb4a;
    (**(code **)(*in_stack_00000010 + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

