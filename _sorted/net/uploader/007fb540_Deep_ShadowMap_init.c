// addr: 0x007fb540
// name: Deep_ShadowMap_init
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall
Deep_ShadowMap_init(void *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes shadow-map render targets and creates the visibility camera used
                       by the shadow-map object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01566a57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Deep_RenderTarget_ctor(param_1,"ShadowMap",param_3);
  local_4 = 0;
  Deep_RenderTargetSet_ctor((void *)((int)param_1 + 0x1c),"ShadowMap");
  local_4._0_1_ = 1;
  pvVar1 = Mem_Alloc(0x2e0);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Deep_VisibilityCameraLite_ctor(pvVar1,_DAT_017f1760);
  }
  local_4._0_1_ = 1;
  FUN_0074ba50(*(undefined4 *)(param_2 + 0x1d0),pvVar1,0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0073fd80(param_5);
  *(undefined4 *)((int)param_1 + 0x2a0) = 0;
  *(void **)((int)param_1 + 0x34) = param_1;
  *(undefined4 *)((int)param_1 + 0x44) = param_4;
  *(undefined1 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0xffffffff;
  *(int *)((int)param_1 + 0x1b4) = (int)param_1 + 0x240;
  *(void **)((int)param_1 + 0x1b0) = (void *)((int)param_1 + 0x1c);
  ExceptionList = local_c;
  return param_1;
}

