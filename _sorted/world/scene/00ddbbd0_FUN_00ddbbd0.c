// addr: 0x00ddbbd0
// name: FUN_00ddbbd0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00ddbbd0(int param_1,undefined4 param_2,uint param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Dispatches boolean visibility/render-state property updates by property index
                       under a global lock, updating flag bits directly or calling specialized
                       setters. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161c788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  switch(param_2) {
  case 0:
    FUN_00df5550(param_3);
    break;
  case 1:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 10 ^ *(uint *)(param_1 + 0x1c)) & 0x400;
    break;
  case 2:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 9 ^ *(uint *)(param_1 + 0x1c)) & 0x200;
    break;
  case 3:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 0xc ^ *(uint *)(param_1 + 0x1c)) & 0x1000;
    break;
  case 4:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 0xd ^ *(uint *)(param_1 + 0x1c)) & 0x2000;
    break;
  case 5:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 0xb ^ *(uint *)(param_1 + 0x1c)) & 0x800;
    break;
  case 6:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^
         ((param_3 & 0xff) << 0x15 ^ *(uint *)(param_1 + 0x1c)) & 0x200000;
    break;
  case 7:
    FUN_00df5340(param_3);
    break;
  case 8:
    FUN_00dd99c0(param_3);
    break;
  case 9:
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) ^ ((param_3 & 0xff) << 0xe ^ *(uint *)(param_1 + 0x1c)) & 0x4000;
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

