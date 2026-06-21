// addr: 0x0095c530
// name: PlayerParticleEmitterEvent_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerParticleEmitterEvent_ctor(void * this) */

void * __thiscall PlayerParticleEmitterEvent_ctor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  undefined1 *puStack00000014;
  undefined4 in_stack_00000018;
  undefined1 local_28 [12];
  undefined4 uStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayerParticleEmitterEvent from PlayerEffectEvent, installs
                       vtables, stores an emitter resource and parameter, and increments the
                       resource refcount. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01595468;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  puStack00000014 = local_28;
  PlayerEffectEvent_ctor(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 0xa0) = in_stack_00000010;
  *(undefined ***)this = PlayerParticleEmitterEvent::vftable;
  *(undefined ***)((int)this + 0x50) = PlayerParticleEmitterEvent::vftable;
  *(undefined4 *)((int)this + 0xa4) = in_stack_00000018;
  piVar1 = *(int **)((int)this + 0xa0);
  iVar2 = piVar1[2];
  piVar1[2] = iVar2 + 1;
  if (iVar2 == 0) {
    uStack_1c = 0x95c5ca;
    (**(code **)(*piVar1 + 0x24))();
  }
  ExceptionList = local_c;
  return this;
}

