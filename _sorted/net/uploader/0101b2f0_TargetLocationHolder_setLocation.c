// addr: 0x0101b2f0
// name: TargetLocationHolder_setLocation
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TargetLocationHolder_setLocation(void * this, void * target, void *
   transform) */

void __thiscall TargetLocationHolder_setLocation(void *this,void *target,void *transform)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Replaces an owned TargetLocation with a newly allocated object constructed
                       from target and transform arguments. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016347eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1,DAT_01b839d8 ^ (uint)&stack0xffffffec);
  }
  pvVar1 = Mem_Alloc(0x40);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TargetLocation_ctor(pvVar1,target,transform);
  }
  *(void **)((int)this + 4) = pvVar1;
  ExceptionList = local_c;
  return;
}

