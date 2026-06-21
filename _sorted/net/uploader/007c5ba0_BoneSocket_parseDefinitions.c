// addr: 0x007c5ba0
// name: BoneSocket_parseDefinitions
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void BoneSocket_parseDefinitions(void * owner, void * xmlNode) */

void BoneSocket_parseDefinitions(void *owner,void *xmlNode)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  char *pcVar6;
  void *pvVar7;
  float *pfVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_68;
  undefined1 local_64 [4];
  float local_60 [17];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Parses BoneSocket XML entries, reading Matrix or HprOffset data with
                       heading/pitch/offset/scale attributes, building transform matrices, and
                       appending socket records. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0156041e;
  local_1c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff30;
  ExceptionList = &local_1c;
  iVar3 = FUN_00d50af0("BoneSocket");
  while (iVar3 != 0) {
    uVar4 = FUN_00d517f0(&DAT_017eda64);
    puVar5 = (uint *)FUN_0072d5d0(uVar4,local_64,uVar2);
    uVar1 = *puVar5;
    uVar4 = FUN_00d517f0(&DAT_017efe9c);
    pfVar8 = (float *)&DAT_01bc2660;
    pfVar9 = local_60;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    iVar3 = FUN_00d50af0("Matrix");
    if (iVar3 == 0) {
      iVar3 = FUN_00d50af0("HprOffset");
      if (iVar3 != 0) {
        local_80 = 0.0;
        local_7c = 0.0;
        local_78 = 0.0;
        local_74 = 0;
        pcVar6 = (char *)FUN_00d517f0("heading");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_80 = (float)dVar10 * _DAT_017efe58;
        }
        pcVar6 = (char *)FUN_00d517f0("pitch");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_7c = (float)dVar10 * _DAT_017efe58;
        }
        pcVar6 = (char *)FUN_00d517f0(&DAT_017efe48);
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_78 = (float)dVar10 * _DAT_017efe58;
        }
        local_90 = 0.0;
        local_8c = 0.0;
        local_88 = 0.0;
        local_84 = _DAT_0175b420;
        pcVar6 = (char *)FUN_00d517f0("offsetX");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_90 = (float)dVar10;
        }
        pcVar6 = (char *)FUN_00d517f0("offsetY");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_8c = (float)dVar10;
        }
        pcVar6 = (char *)FUN_00d517f0("offsetZ");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_88 = (float)dVar10;
        }
        local_b0 = _DAT_0175b420;
        local_ac = _DAT_0175b420;
        local_a8 = _DAT_0175b420;
        local_a4 = _DAT_0175b420;
        pcVar6 = (char *)FUN_00d517f0("scaleX");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_b0 = (float)dVar10;
        }
        pcVar6 = (char *)FUN_00d517f0("scaleY");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_ac = (float)dVar10;
        }
        pcVar6 = (char *)FUN_00d517f0("scaleZ");
        if (pcVar6 != (char *)0x0) {
          dVar10 = _atof(pcVar6);
          local_a8 = (float)dVar10;
        }
        FUN_00776970(local_60,&local_80,&local_90,&local_b0,1);
      }
    }
    else {
      iVar3 = FUN_00d50af0(&DAT_017efe90);
      if (iVar3 != 0) {
        pfVar8 = local_60 + 2;
        do {
          pcVar6 = (char *)FUN_00d517f0(&DAT_017efe88);
          dVar10 = _atof(pcVar6);
          local_94 = (float)dVar10;
          pcVar6 = (char *)FUN_00d517f0(&DAT_017efe80);
          dVar10 = _atof(pcVar6);
          local_68 = (float)dVar10;
          pcVar6 = (char *)FUN_00d517f0(&DAT_017efe78);
          dVar10 = _atof(pcVar6);
          pcVar6 = (char *)FUN_00d517f0(&DAT_017efe70);
          dVar11 = _atof(pcVar6);
          pfVar8[-2] = local_94;
          pfVar8[-1] = local_68;
          *pfVar8 = (float)dVar10;
          pfVar8[1] = (float)dVar11;
          iVar3 = FUN_00d50b60(&DAT_017efe90);
          pfVar8 = pfVar8 + 4;
        } while (iVar3 != 0);
      }
    }
    pvVar7 = Mem_Alloc(0x70);
    local_14 = 0;
    if (pvVar7 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007c5710(uVar1,uVar4,local_60);
    }
    local_14 = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)((int)xmlNode + 0x18);
    if (*(int *)((int)xmlNode + 0x18) == 0) {
      *(int *)((int)xmlNode + 0x14) = iVar3;
    }
    else {
      *(int *)(*(int *)((int)xmlNode + 0x18) + 0x6c) = iVar3;
    }
    *(int *)((int)xmlNode + 0x18) = iVar3;
    *(uint *)(iVar3 + 100) = uVar1;
    *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)((int)xmlNode + (uVar1 & 0x3f) * 4 + 0x20);
    *(int *)((int)xmlNode + (uVar1 & 0x3f) * 4 + 0x20) = iVar3;
    *(int *)((int)xmlNode + 0x1c) = *(int *)((int)xmlNode + 0x1c) + 1;
    iVar3 = FUN_00d50b60("BoneSocket");
  }
  ExceptionList = local_1c;
  return;
}

