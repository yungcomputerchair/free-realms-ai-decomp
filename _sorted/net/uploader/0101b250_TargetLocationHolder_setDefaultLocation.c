// addr: 0x0101b250
// name: TargetLocationHolder_setDefaultLocation
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void TargetLocationHolder_setDefaultLocation(void * this, void * target) */

void __thiscall TargetLocationHolder_setDefaultLocation(void *this,void *target)

{
  void *pvVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Replaces an owned TargetLocation with a newly allocated default-location
                       object built from the target and an identity/default transform. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_016347bb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  }
  pvVar1 = Mem_Alloc(0x40);
  uStack_14 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    uStack_30 = _DAT_01cb53d0;
    uStack_2c = uRam01cb53d4;
    uStack_28 = uRam01cb53d8;
    uStack_24 = uRam01cb53dc;
    pvVar1 = TargetLocation_ctor(pvVar1,target,&uStack_30);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_1c;
  return;
}

