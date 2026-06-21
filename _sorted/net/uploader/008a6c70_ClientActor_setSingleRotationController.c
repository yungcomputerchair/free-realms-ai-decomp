// addr: 0x008a6c70
// name: ClientActor_setSingleRotationController
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientActor_setSingleRotationController(void * actor, float a_, float b_,
   float c_) */

void __thiscall
ClientActor_setSingleRotationController(void *this,void *actor,float a_,float b_,float c_)

{
  int iVar1;
  void *pvVar2;
  uint value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces the actor movement/controller slot with a new
                       ControllerSingleRotation object unless that controller type is already
                       active. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0157e51b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(undefined4 **)((int)this + 0xec) != (undefined4 *)0x0) &&
     (iVar1 = (**(code **)**(undefined4 **)((int)this + 0xec))
                        (DAT_01b839d8 ^ (uint)&stack0xffffffe8), iVar1 == 10)) {
    ExceptionList = local_c;
    return;
  }
  value_ = 0;
  if (*(uint *)((int)this + 0xec) != 0) {
    value_ = *(uint *)((int)this + 0xec);
  }
  pvVar2 = Mem_Alloc(0xf0);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = ControllerSingleRotation_ctor
                       (pvVar2,*(undefined4 *)((int)this + 200),*(undefined4 *)((int)this + 0xe8),
                        this,(int)actor,a_,b_);
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0xec) = pvVar2;
  setField_78(pvVar2,value_);
  *(undefined1 *)(*(int *)((int)this + 0x1a8) + 0x88) = 0;
  ExceptionList = local_c;
  return;
}

