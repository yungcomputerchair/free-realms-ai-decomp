// addr: 0x0051d057
// name: DynamicArray_insertRange
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void DynamicArray_insertRange(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  uint local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  uint local_3c;
  
                    /* Performs an in-place range insertion for a dynamically sized sequence using
                       iterators and element construction/destruction callbacks. Evidence is the
                       capacity/available-space logic, repeated element moves, construction calls,
                       and final iterator cleanup; class is not evident. */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc8;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  local_40 = *(undefined4 *)(extraout_ECX + 0xc);
  local_44 = 0x51d07c;
  FUN_0040b244();
  local_3c = unaff_EBP + -0x38;
  local_40 = 0x51d088;
  uVar2 = FUN_0040ad02();
  *(undefined4 *)(unaff_EBP + 0x10) = uVar2;
  uVar4 = *(int *)(extraout_ECX + 0x10) - *(int *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x20) = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  local_3c = unaff_EBP + -0x18;
  local_48 = 0;
  local_44 = *(int *)(unaff_EBP + 0x24);
  local_40 = *(undefined4 *)(unaff_EBP + 0x28);
  local_54 = 0;
  local_50 = *(int *)(unaff_EBP + 0x18);
  local_4c = *(undefined1 **)(unaff_EBP + 0x1c);
  local_58 = (undefined1 *)0x51d0ca;
  FUN_004e2cce();
  if (*(uint *)(unaff_EBP + 0x10) < uVar4) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = *(uint *)(unaff_EBP + -0x18);
    if (*(uint *)(unaff_EBP + 0x10) < uVar4) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x1c);
      local_3c = uVar4 - *(int *)(unaff_EBP + 0x10);
      local_40 = 0x51d102;
      FUN_0040b2dd();
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x24);
      while( true ) {
        local_3c = unaff_EBP + -0x38;
        local_40 = 0x51d11d;
        cVar1 = FUN_0040ad28();
        if (cVar1 != '\0') break;
        local_3c = 0x51d129;
        FUN_004d5cc1();
        local_3c = 0x51d130;
        local_3c = FUN_0040b27b();
        local_40 = 0x51d138;
        FUN_00517f36();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
      while (*(int *)(unaff_EBP + -0x14) != 0) {
        local_3c = uVar4 - 1;
        local_40 = unaff_EBP + 0x14;
        local_44 = 0x51d154;
        FUN_0041b7e1();
        local_40 = 0x51d15b;
        local_3c = FUN_004f16af();
        local_40 = 0x51d163;
        FUN_00517f36();
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -1;
      }
      local_4c = (undefined1 *)&local_44;
      local_50 = unaff_EBP + 0x14;
      local_54 = 0x51d178;
      local_48 = uVar4;
      FUN_0041b7e1();
      local_50 = 0x51d17f;
      FUN_0041b890();
      local_4c = *(undefined1 **)(unaff_EBP + 0x24);
      local_48 = *(undefined4 *)(unaff_EBP + 0x28);
      local_58 = *(undefined1 **)(unaff_EBP + -0x28);
      local_54 = *(undefined4 *)(unaff_EBP + -0x24);
      iVar3 = unaff_EBP + 0x20;
      goto LAB_0051d3ee;
    }
    *(uint *)(unaff_EBP + -0x14) = uVar4;
    while (*(int *)(unaff_EBP + -0x14) != 0) {
      local_3c = uVar4 - 1;
      local_40 = unaff_EBP + -0x38;
      local_44 = 0x51d1c4;
      FUN_0041b7e1();
      local_40 = 0x51d1cb;
      local_3c = FUN_004f16af();
      local_40 = 0x51d1d3;
      FUN_00517f36();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + -1;
    }
    local_40 = unaff_EBP + -0x38;
    local_44 = unaff_EBP + -0x2c;
    local_48 = 0x51d1e6;
    local_3c = uVar4;
    FUN_0041b7e1();
    local_44 = 0x51d1ed;
    FUN_0041b890();
    local_44 = 0;
    local_40 = *(undefined4 *)(unaff_EBP + -0x34);
    local_3c = *(int *)(unaff_EBP + -0x30);
    local_58 = (undefined1 *)&local_50;
    local_54 = *(undefined4 *)(unaff_EBP + 0x10);
    local_5c = 0x51d211;
    FUN_0041b890();
    FUN_0041b890(&local_5c,uVar4);
    FUN_00422553(unaff_EBP + -0x38);
    local_4c = (undefined1 *)&local_44;
    local_48 = *(undefined4 *)(unaff_EBP + 0x10);
    local_50 = unaff_EBP + 8;
    local_54 = 0x51d23d;
    FUN_0041b7e1();
    local_50 = 0x51d244;
    FUN_0041b890();
LAB_0051d3c5:
    local_4c = *(undefined1 **)(unaff_EBP + 0x24);
    local_48 = *(undefined4 *)(unaff_EBP + 0x28);
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (*(uint *)(unaff_EBP + -0x18) <= uVar4) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      while (*(uint *)(unaff_EBP + -0x14) < *(uint *)(unaff_EBP + -0x18)) {
        local_3c = (*(uint *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x18)) + uVar4 +
                   *(int *)(unaff_EBP + 0x10);
        local_40 = unaff_EBP + -0x38;
        local_44 = 0x51d345;
        FUN_0041b7e1();
        local_40 = 0x51d34c;
        local_3c = FUN_004f16af();
        local_40 = 0x51d354;
        FUN_005192a7();
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      }
      local_3c = *(undefined4 *)(unaff_EBP + 0x10);
      local_40 = unaff_EBP + 8;
      local_44 = unaff_EBP + -0x38;
      local_48 = 0x51d369;
      FUN_0041b7e1();
      local_44 = 0x51d370;
      FUN_0041b890();
      local_4c = (undefined1 *)&local_44;
      local_50 = 0x51d37f;
      local_48 = uVar4;
      FUN_0041b890();
      local_58 = (undefined1 *)&local_50;
      local_54 = *(undefined4 *)(unaff_EBP + -0x18);
      local_5c = uVar4;
      FUN_0041b890(unaff_EBP + -0x38);
      local_5c = 0x51d39c;
      FUN_0041cb3d();
      local_5c = 0;
      uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
      iVar3 = *(int *)(unaff_EBP + 0x10);
      local_58 = (undefined1 *)uVar2;
      local_54 = iVar3;
      FUN_004224f3(unaff_EBP + 8);
      local_44 = 0;
      local_40 = uVar2;
      local_3c = iVar3;
      goto LAB_0051d3c5;
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x1c);
    local_40 = 0x51d28e;
    local_3c = uVar4;
    FUN_0040b2dd();
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x24);
    while( true ) {
      local_3c = unaff_EBP + 0x20;
      local_40 = 0x51d2a9;
      cVar1 = FUN_0040ad28();
      if (cVar1 != '\0') break;
      local_3c = 0x51d2b5;
      local_3c = FUN_0040b27b();
      local_40 = 0x51d2bd;
      FUN_005192a7();
      local_3c = 0x51d2c5;
      FUN_0040b2b5();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while (*(uint *)(unaff_EBP + -0x14) < uVar4) {
      local_3c = *(uint *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 0x10);
      local_40 = unaff_EBP + 0x20;
      local_44 = 0x51d2e2;
      FUN_0041b7e1();
      local_40 = 0x51d2e9;
      local_3c = FUN_004f16af();
      local_40 = 0x51d2f1;
      FUN_005192a7();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    }
    local_4c = (undefined1 *)&local_44;
    local_48 = *(undefined4 *)(unaff_EBP + 0x10);
    local_50 = unaff_EBP + 0x20;
    local_54 = 0x51d30a;
    FUN_0041b7e1();
    local_50 = 0x51d311;
    FUN_0041b890();
    local_4c = *(undefined1 **)(unaff_EBP + -0x28);
    local_48 = *(undefined4 *)(unaff_EBP + -0x24);
  }
  local_58 = *(undefined1 **)(unaff_EBP + 0x18);
  local_54 = *(undefined4 *)(unaff_EBP + 0x1c);
  iVar3 = unaff_EBP + 0x14;
LAB_0051d3ee:
  local_50 = 0;
  local_5c = 0;
  FUN_00506b9c(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

