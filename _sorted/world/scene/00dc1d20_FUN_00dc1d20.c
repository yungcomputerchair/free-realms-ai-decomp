// addr: 0x00dc1d20
// name: FUN_00dc1d20
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dc1d20(int param_1,undefined4 param_2,uint param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Dispatches boolean Umbra/visibility property updates by property index under
                       the global lock, or uses the fallback property dispatcher when the subsystem
                       is not initialized. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161b748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 != 0) {
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
    uStack_4 = 0;
    switch(param_2) {
    case 0:
      FUN_00dcf0e0(param_3);
      break;
    case 1:
      FUN_00dc1c90(param_3);
      break;
    case 2:
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) ^ ((param_3 & 0xff) << 9 ^ *(uint *)(param_1 + 0x14)) & 0x200;
      break;
    case 3:
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) ^ ((param_3 & 0xff) << 0xb ^ *(uint *)(param_1 + 0x14)) & 0x800
      ;
      break;
    case 4:
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) ^
           ((param_3 & 0xff) << 0xc ^ *(uint *)(param_1 + 0x14)) & 0x1000;
      break;
    case 5:
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) ^ ((param_3 & 0xff) << 10 ^ *(uint *)(param_1 + 0x14)) & 0x400;
      break;
    case 6:
      FUN_00dc1cc0(param_3);
      break;
    case 7:
      FUN_00dd0030(param_3);
      break;
    case 8:
      FUN_00dc1cf0(param_3);
      break;
    case 9:
      *(uint *)(param_1 + 0x14) =
           *(uint *)(param_1 + 0x14) ^
           ((param_3 & 0xff) << 0xd ^ *(uint *)(param_1 + 0x14)) & 0x2000;
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
    ExceptionList = local_c;
    return;
  }
  FUN_00ddbbd0(param_2,param_3);
  ExceptionList = local_c;
  return;
}

