// addr: 0x00fdfab0
// name: FUN_00fdfab0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x00fdfc63) */
/* WARNING: Removing unreachable block (ram,0x00fdfc70) */
/* WARNING: Removing unreachable block (ram,0x00fdfc7d) */

uint __thiscall FUN_00fdfab0(int param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  void **ppvVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016303d6;
  local_c = ExceptionList;
  ppvVar2 = &local_c;
  if ((0 < (int)param_3) && (param_2 != (int *)0x0)) {
    param_3 = *param_2;
    ExceptionList = ppvVar2;
    ppvVar2 = (void **)FUN_006fc7b0(&param_3,&DAT_0187c530,4,DAT_01b839d8 ^ (uint)&stack0xffffffd8);
    if ((ppvVar2 == (void **)0x0) && (ppvVar2 = (void **)FUN_00fded90(param_2 + 1), param_3 == 1)) {
      uVar3 = FUN_00fded90(ppvVar2);
      uVar10 = *(uint *)(param_1 + 8);
      if ((int)uVar10 < 0) {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      if ((uVar10 & 0x40000000) != 0) {
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      *(uint *)(param_1 + 8) = uVar10 & 0x3fffffff;
      piVar4 = (int *)FUN_00fded90(uVar3);
      if (0 < (int)param_3) {
        local_10 = param_3;
        do {
          iVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          if (iVar5 == 0) {
            param_3 = 0;
            iVar5 = FUN_00fded90(piVar4);
            uVar10 = param_3;
            param_2 = Mem_Alloc(-(uint)((int)((ulonglong)param_3 * 0xc >> 0x20) != 0) |
                                (uint)((ulonglong)param_3 * 0xc));
            local_4 = 0;
            if (param_2 == (int *)0x0) {
              param_2 = (int *)0x0;
            }
            else {
              _vector_constructor_iterator_(param_2,0xc,uVar10,FUN_0076c770);
            }
            local_4 = 0xffffffff;
            iVar9 = uVar10 * 0xc;
            if (0 < iVar9) {
              puVar6 = (undefined1 *)param_2;
              iVar11 = iVar9;
              do {
                *puVar6 = puVar6[iVar5 - (int)param_2];
                puVar6 = puVar6 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            uVar3 = FUN_00fded90(iVar9 + iVar5);
            pvVar7 = Mem_Alloc(0);
            DAT_01cb56f8 = DAT_01cb56f8 + param_3 * 0xc;
            if (*(int *)(param_1 + 4) == 0) {
              pvVar8 = Mem_Alloc(0x60);
              local_4 = 1;
              if (pvVar8 == (void *)0x0) {
                pvVar8 = (void *)0x0;
              }
              else {
                pvVar8 = AppPhysics_MeshData_ctor(pvVar8);
              }
              local_4 = 0xffffffff;
              *(void **)(param_1 + 4) = pvVar8;
            }
            iVar5 = *(int *)(param_1 + 8);
            uVar10 = ~-(uint)(*(int *)(*(uint *)(param_1 + 4) + 4) != 0) & *(uint *)(param_1 + 4);
            uVar1 = 0;
            if (((iVar5 == 3) || (iVar5 == 8)) || (iVar5 == 0x2a)) {
              uVar1 = 1;
            }
            *(uint *)(uVar10 + 8) = param_3;
            *(undefined1 *)(uVar10 + 0x42) = 1;
            *(int **)(uVar10 + 0xc) = param_2;
            *(undefined4 *)(uVar10 + 0x10) = 0;
            *(void **)(uVar10 + 0x14) = pvVar7;
            *(undefined1 *)(uVar10 + 0x40) = 1;
            *(undefined1 *)(uVar10 + 0x41) = uVar1;
            FUN_00af22f0();
            param_3 = 0;
            iVar9 = FUN_00fded90(uVar3);
            iVar5 = param_3;
            FUN_00fdf050(iVar9,param_3);
            piVar4 = (int *)(iVar9 + iVar5);
            FUN_00fdf970();
          }
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      ExceptionList = local_c;
      return (uint)(*(int *)(param_1 + 4) != 0);
    }
  }
  ExceptionList = local_c;
  return (uint)ppvVar2 & 0xffffff00;
}

