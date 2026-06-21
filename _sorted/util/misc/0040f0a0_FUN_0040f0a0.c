// addr: 0x0040f0a0
// name: FUN_0040f0a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void set_object_flag_04000000(int * this, bool enabled_, bool suppressNotify_)
    */

void __thiscall set_object_flag_04000000(void *this,bool enabled_,bool suppressNotify_)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined4 local_c;
  uint local_8;
  
                    /* Toggles bit 0x04000000 in an object flags field, optionally sends a
                       notification/event, then propagates the setting to child objects that differ.
                       Class identity is not evident from this context. */
  uVar4 = *(uint *)((int)this + 100);
  if (enabled_) {
    uVar1 = uVar4 | 0x4000000;
  }
  else {
    uVar1 = uVar4 & 0xfbffffff;
  }
  if (uVar4 != uVar1) {
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x60);
    *(uint *)((int)this + 100) = uVar1;
    if (!suppressNotify_) {
      local_c = 0x4100006;
      local_8 = 0x16040000;
      (**(code **)(*(int *)((int)this + 0x24) + 0x18))
                (DAT_01bc418c,(int *)((int)this + 0x24),&local_c);
      if ((local_8 & 0x4000000) != 0) {
        (**(code **)(*(int *)this + 0x230))(0,0);
      }
    }
    if (*(int *)((int)this + 0x4c) != 0) {
      local_8 = 0;
      iVar2 = FUN_0040a782();
      if (iVar2 != 0) {
        do {
          piVar3 = (int *)FUN_0040a795(local_8);
          piVar3 = (int *)*piVar3;
          if ((piVar3 != (int *)0x0) && (((piVar3[0x19] & 0x4000000U) != 0) != enabled_)) {
            local_20 = 0;
            uStack_1c = 0;
            uStack_18 = 0;
            uStack_14 = 0;
            local_2c = 0;
            local_10 = DAT_01bc28c8;
            local_28 = (uint)enabled_;
            local_24 = (uint)suppressNotify_;
            (**(code **)(*piVar3 + 0x110))(&local_2c);
            if ((local_2c & 0x24924) != 0) {
              FUN_004d93a3();
            }
          }
          local_8 = local_8 + 1;
          uVar4 = FUN_0040a782();
        } while (local_8 < uVar4);
      }
    }
  }
  return;
}

