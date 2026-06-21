// addr: 0x0044ec04
// name: FUN_0044ec04
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0044ec04(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  
                    /* Configures a Win32/GDI-like color table/palette object via indirect API
                       calls, then remaps low bits of each byte in an input buffer to fixed palette
                       values. This appears unrelated to match logic. */
  FUN_0044af23();
  if (param_2 == 1) {
    param_2 = 0x10;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    param_2 = 2;
  }
  uVar2 = (*DAT_01bc4490)(*(undefined4 *)(param_1 + 0x14));
  uVar3 = (*DAT_01bc4494)(uVar2,param_2,0,0);
  FUN_0044d0c6(uVar3,0);
  uVar4 = FUN_00443de8(0);
  (*DAT_01bc4494)(uVar2,param_2,uVar4,uVar3);
  (*DAT_01bc448c)(*(undefined4 *)(param_1 + 0x14),uVar2);
  for (uVar7 = 0;
      (*(int *)(param_3 + 4) != 0 && (uVar7 < (uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4)))
      ); uVar7 = uVar7 + 1) {
    pbVar5 = (byte *)FUN_00443de8(uVar7);
    bVar1 = *pbVar5 & 7;
    if ((*pbVar5 & 7) == 0) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 1;
    }
    else if (bVar1 == 1) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 0x24;
    }
    else if (bVar1 == 2) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 4;
    }
    else if (bVar1 == 3) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 0x21;
    }
    else if (bVar1 == 4) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 2;
    }
    else if (bVar1 == 5) {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 0x14;
    }
    else {
      puVar6 = (undefined1 *)FUN_00443de8(uVar7);
      *puVar6 = 0;
    }
  }
  return 1;
}

