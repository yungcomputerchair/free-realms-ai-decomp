// addr: 0x010d44f0
// name: FUN_010d44f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_010d44f0(int param_1,undefined4 *param_2,char param_3)

{
  uint node_;
  uint uVar1;
  void *this;
  uint extraout_EAX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates or updates a 0x2c-byte keyed record, looking up existing state and
                       inserting via 010d4490 when absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164b65b;
  local_c = ExceptionList;
  node_ = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  uVar1 = *(uint *)(param_1 + 0x284 + ((uint)param_2 & 3) * 4);
  while( true ) {
    if (uVar1 == 0) {
      uVar1 = 0;
      if (param_3 != '\0') {
        ExceptionList = &local_c;
        this = Mem_Alloc(0x2c);
        local_4 = 0;
        uVar1 = 0;
        if (this != (void *)0x0) {
          init_istring_hash_record(this,param_2,node_);
          uVar1 = extraout_EAX;
        }
        local_4 = 0xffffffff;
        insert_node_into_4_hash((void *)(param_1 + 0x274),(int)param_2,uVar1,node_);
      }
      ExceptionList = local_c;
      return uVar1;
    }
    if (*(undefined4 **)(uVar1 + 0x20) == param_2) break;
    uVar1 = *(uint *)(uVar1 + 0x1c);
  }
  return uVar1;
}

