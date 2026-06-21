// addr: 0x0065f018
// name: FUN_0065f018
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0065f018(int *param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
                    /* Handles a resource/control offset change for two special resource ids,
                       querying an interface and updating ResourceOffsetTable entries and cached
                       state flags. No class evidence, so left unnamed. */
  uVar2 = (ushort)param_2;
  if ((ushort)param_2 == DAT_01bdd4e4) {
    FUN_00424fe0(DAT_01bdd4e4);
    param_2 = 0;
    (**(code **)(param_1[9] + 0x18))(DAT_01bd9d7c,param_1 + 9,&param_2);
    if (param_2 != 0) {
      ResourceOffsetTable_setEntryOffset(param_1,(uint)DAT_01bddd18,param_2);
    }
    if (uVar2 != DAT_01bdd4e4) goto LAB_0065f070;
  }
  else {
LAB_0065f070:
    if (uVar2 != DAT_01bddd18) {
      return;
    }
  }
  uVar4 = param_1[0x3a];
  if ((uVar4 & 0x10000000) == 0) {
    return;
  }
  iVar1 = param_1[0x50];
  if ((uVar4 & 0x3000000) == 0x2000000) {
    uVar6 = FUN_0064ffc0(0);
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((((uint)uVar6 >> 1 & 1) != 0) || (iVar1 < param_1[0x41])) {
      uVar7 = FUN_0064ffc0(0);
      uVar4 = (uint)(uVar7 >> 0x20);
      if ((((uint)uVar7 >> 1 & 1) == 0) || (param_1[0x41] < iVar1)) {
        if ((uVar7 & 0xc00000000000000) == 0) {
          cVar3 = '\x02';
        }
        else if ((uVar4 & 0xc000000) == 0x4000000) {
          cVar3 = '\x04';
        }
        else {
          cVar3 = ((uVar4 & 0xc000000) != 0x8000000) * '\x02' + '\x06';
        }
        goto LAB_0065f1a2;
      }
    }
    param_1[0x3a] = uVar4 & 0xefffffff;
  }
  else {
    if ((uVar4 & 0x3000000) != 0x1000000) {
      param_1[0x3a] = uVar4 & 0xf3ffffff;
      FUN_00424fe0(DAT_01bdd4e4);
      FUN_00424fe0(DAT_01bddd18);
      return;
    }
    uVar4 = FUN_0064ffc0(0);
    if ((((uVar4 >> 1 & 1) != 0) ||
        (iVar5 = (**(code **)(*param_1 + 800))(), iVar5 + param_1[0x41] <= iVar1)) &&
       ((uVar4 = FUN_0064ffc0(0), (uVar4 >> 1 & 1) == 0 ||
        (iVar5 = (**(code **)(*param_1 + 800))(), iVar1 <= iVar5 + param_1[0x41])))) {
      uVar4 = param_1[0x3a] & 0xc000000;
      if (uVar4 == 0) {
        cVar3 = '\x01';
      }
      else if (uVar4 == 0x4000000) {
        cVar3 = '\x03';
      }
      else {
        cVar3 = (uVar4 != 0x8000000) * '\x02' + '\x05';
      }
LAB_0065f1a2:
      (**(code **)(*param_1 + 0x2c0))(cVar3,1,2);
      return;
    }
    param_1[0x3a] = param_1[0x3a] & 0xefffffff;
  }
  (**(code **)(*param_1 + 0x228))(0,0);
  return;
}

