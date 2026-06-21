// addr: 0x009ccd50
// name: BreadcrumbManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void BreadcrumbManager_registerDataSource(void * this) */

void __thiscall BreadcrumbManager_registerDataSource(void *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  uint uVar6;
  void *pvVar7;
  double *pdVar8;
  void *in_stack_00000004;
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar7 = in_stack_00000004;
                    /* Initializes the breadcrumb/path datasource, reading
                       MinimapOptions/PathEnabled configuration before constructing
                       BreadcrumbDataSource. Called from a base-client initialization path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a3d90;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(void **)((int)this + 0x1c) = in_stack_00000004;
  FUN_009cc1c0(uVar6);
  local_4 = 0;
  FUN_009cc1c0();
  local_4._0_1_ = 1;
  FUN_009cc1c0();
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0xd00) = 0;
  *(undefined1 *)((int)this + 0xd01) = 1;
  *(undefined4 *)((int)this + 0xd04) = 0;
  *(undefined4 *)((int)this + 0xd08) = 0;
  *(undefined4 *)((int)this + 0xd0c) = 0;
  *(undefined4 *)((int)this + 0xd10) = 0;
  *(undefined1 *)((int)this + 0xd18) = 0;
  *(undefined1 *)((int)this + 0xd19) = 0;
  in_stack_00000004 = Mem_Alloc(0x264);
  local_4._0_1_ = 3;
  if (in_stack_00000004 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    pvVar7 = BreadcrumbDataSource_ctor(in_stack_00000004,pvVar7);
  }
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0xd20) = 0;
  FUN_009cb430(pvVar7);
  local_4 = CONCAT31(local_4._1_3_,4);
  fVar3 = 0.0;
  *(undefined1 *)((int)this + 0xd24) = 0;
  *(undefined1 *)((int)this + 0xd25) = 0;
  *(undefined4 *)((int)this + 0xcf8) = DAT_01be5d18;
  *(undefined4 *)((int)this + 0xcfc) = DAT_01be5d1c;
  *(undefined4 *)((int)this + 0xcf0) = DAT_01be5d18;
  *(undefined4 *)((int)this + 0xcf4) = DAT_01be5d1c;
  iVar1 = *(int *)((int)this + 0x1c);
  for (pdVar8 = *(double **)(*(int *)(iVar1 + 500) + 0xf34); fVar2 = fVar3, pdVar8 != (double *)0x0;
      pdVar8 = *(double **)((int)pdVar8 + 0x14)) {
    if (*(int *)(pdVar8 + 2) == 0x226173c7) {
      fVar2 = (float)*pdVar8;
      break;
    }
  }
  *(float *)this = fVar2;
  for (pdVar8 = *(double **)(*(int *)(iVar1 + 500) + 0x1158); fVar2 = fVar3, pdVar8 != (double *)0x0
      ; pdVar8 = *(double **)((int)pdVar8 + 0x14)) {
    if (*(int *)(pdVar8 + 2) == -0x6c2dabb0) {
      fVar2 = (float)*pdVar8;
      break;
    }
  }
  *(float *)((int)this + 4) = fVar2;
  for (pdVar8 = *(double **)(*(int *)(iVar1 + 500) + 0x604); fVar2 = fVar3, pdVar8 != (double *)0x0;
      pdVar8 = *(double **)((int)pdVar8 + 0x14)) {
    if (*(int *)(pdVar8 + 2) == -0x41cfce85) {
      fVar2 = (float)*pdVar8;
      break;
    }
  }
  local_18 = (undefined4)(longlong)ROUND(fVar2);
  *(undefined4 *)((int)this + 0x10) = local_18;
  iVar1 = *(int *)((int)this + 0x1c);
  for (pdVar8 = *(double **)(*(int *)(iVar1 + 500) + 0x1a64); fVar2 = fVar3, pdVar8 != (double *)0x0
      ; pdVar8 = *(double **)((int)pdVar8 + 0x14)) {
    if (*(int *)(pdVar8 + 2) == 0x6103a693) {
      fVar2 = (float)*pdVar8;
      break;
    }
  }
  *(float *)((int)this + 8) = fVar2;
  pdVar8 = *(double **)(*(int *)(iVar1 + 500) + 0x1308);
  do {
    if (pdVar8 == (double *)0x0) {
LAB_009ccf73:
      *(float *)((int)this + 0xc) = fVar3;
      in_stack_00000004 = (void *)0x68b011cf;
      pdVar8 = (double *)FUN_00706570(&stack0x00000004);
      if (pdVar8 == (double *)0x0) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)*pdVar8;
      }
      *(float *)((int)this + 0x14) = fVar3;
      in_stack_00000004 = (void *)0xa88f568a;
      pdVar8 = (double *)FUN_00706570(&stack0x00000004);
      dVar4 = _DAT_01806398;
      if (pdVar8 != (double *)0x0) {
        dVar4 = *pdVar8;
      }
      *(float *)((int)this + 0x18) = (float)dVar4;
      if (*(int *)(iVar1 + 0x6d8) != 0) {
        uVar5 = Config_GetBool("MinimapOptions","PathEnabled",1,0,0xffffffff,0xffffffff);
        *(undefined1 *)((int)this + 0xd01) = uVar5;
      }
      ExceptionList = local_c;
      return;
    }
    if (*(int *)(pdVar8 + 2) == 0x7d0464bc) {
      fVar3 = (float)*pdVar8;
      goto LAB_009ccf73;
    }
    pdVar8 = *(double **)((int)pdVar8 + 0x14);
  } while( true );
}

