// addr: 0x0054293d
// name: FUN_0054293d
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0054293d(undefined4 *param_1,void *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (param_1[0xe] == 0) {
    local_8 = param_1;
    DERWriter_writeSignedInteger64(param_2,*param_3,param_3[1]);
  }
  else {
    cVar1 = (char)*param_3;
    uVar2 = *param_3;
    uVar3 = param_3[1];
    local_8 = &DAT_01bc7e28;
    if ((uVar2 == (int)cVar1) && (uVar3 == (int)cVar1 >> 0x1f)) {
      FUN_004e4fbb(1,cVar1);
      param_3 = (uint *)0x0;
    }
    else if ((uVar2 == (int)(short)*param_3) && (uVar3 == (int)(short)*param_3 >> 0x1f)) {
      FUN_004e4fbb(2,cVar1);
      lVar5 = __allshr(8,param_3[1]);
      *(char *)((int)local_8 + 5) = (char)lVar5;
      param_3 = (uint *)0x1;
    }
    else if ((((uVar2 & 0xff800000) == 0xff800000) && (uVar3 == 0xffffffff)) ||
            ((uVar2 & 0xff800000) == 0 && uVar3 == 0)) {
      FUN_004e4fbb(3,cVar1);
      lVar5 = __allshr(8,param_3[1]);
      puVar4 = local_8;
      *(char *)((int)local_8 + 5) = (char)lVar5;
      lVar5 = __allshr(0x10,param_3[1]);
      *(char *)((int)puVar4 + 6) = (char)lVar5;
      param_3 = (uint *)0x2;
    }
    else {
      FUN_004e4fbb(8,cVar1);
      lVar5 = __allshr(8,param_3[1]);
      puVar4 = local_8;
      *(char *)((int)local_8 + 5) = (char)lVar5;
      lVar5 = __allshr(0x10,param_3[1]);
      *(char *)((int)puVar4 + 6) = (char)lVar5;
      lVar5 = __allshr(0x18,param_3[1]);
      *(char *)((int)puVar4 + 7) = (char)lVar5;
      lVar5 = __allshr(0x20,param_3[1]);
      *(char *)(puVar4 + 2) = (char)lVar5;
      lVar5 = __allshr(0x28,param_3[1]);
      *(char *)((int)puVar4 + 9) = (char)lVar5;
      *(char *)((int)puVar4 + 10) = *(char *)((int)param_3 + 6);
      *(char *)((int)puVar4 + 0xb) = *(char *)((int)param_3 + 7);
      param_3 = (uint *)0x3;
    }
    FUN_00542281(param_2,0,0xc,&local_8,param_3);
    FUN_004d83ba();
  }
  return;
}

