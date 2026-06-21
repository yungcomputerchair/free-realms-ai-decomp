// addr: 0x00795830
// name: WorldScene_initializeDeepScene
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: char WorldScene_initializeDeepScene(void * this, void * device, int
   enableThread_, void * arg4, void * arg5, void * arg6, void * arg7, int pipelineLevel_, void *
   arg9, void * arg10, void * arg11) */

char __thiscall
WorldScene_initializeDeepScene
          (void *this,void *device,int enableThread_,void *arg4,void *arg5,void *arg6,void *arg7,
          int pipelineLevel_,void *arg9,void *arg10,void *arg11)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvStack_84;
  void *pvStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  void *pvStack_44;
  void *pvStack_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Initializes the world scene rendering stack: toggles the worker thread,
                       creates a Deep::Engine and Deep::Scene, selects pipeline_*.xml, loads lights
                       XML, and begins sky/resource setup. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0155b172;
  local_1c = ExceptionList;
  pvStack_84 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_1c;
  *(void **)((int)this + 0x244) = arg4;
  *(void **)((int)this + 0x254) = arg7;
  *(void **)((int)this + 0x248) = arg5;
  *(char *)((int)this + 600) = (char)enableThread_;
  if (*(int *)((int)this + 0x45c) != 0) {
    FUN_00fbf780(enableThread_);
  }
  *(void **)((int)this + 0x2d8) = device;
  iVar2 = (**(code **)(**(int **)((int)this + 0x440) + 0x54))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 0x440) + 0x74))();
    if (iVar2 < 2) {
LAB_007958f2:
      ExceptionList = local_1c;
      return (*(int *)((int)this + 0x35c) != -1) + '\x02';
    }
    iVar2 = (**(code **)(**(int **)((int)this + 0x440) + 0x78))();
    if (iVar2 < 2) goto LAB_007958f2;
    cVar1 = (**(code **)(**(int **)((int)this + 0x440) + 0x6c))();
    if (cVar1 == '\0') goto LAB_007958f2;
    cVar1 = (**(code **)(**(int **)((int)this + 0x440) + 0x70))();
    if (cVar1 == '\0') goto LAB_007958f2;
  }
  cVar1 = (**(code **)(**(int **)((int)this + 0x440) + 0x150))
                    (device,0,arg4,arg5,8,0x16,arg7,enableThread_);
  if (cVar1 == '\0') {
    ExceptionList = pvStack_3c;
    return '\x01';
  }
  pvVar3 = Mem_Alloc(0x8f0);
  iStack_34 = 0;
  pvStack_84 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar4 = Mem_Alloc(0x30);
    iStack_34._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_00892030();
    }
    iStack_34 = (uint)iStack_34._1_3_ << 8;
    pvVar3 = Deep_Engine_ctor(pvVar3,*(void **)((int)this + 0x440),pvVar4,
                              *(char **)((int)this + 0x43c),'\0');
  }
  iStack_34 = 0xffffffff;
  *(void **)((int)this + 0x25c) = pvVar3;
  *(undefined4 *)((int)pvVar3 + 0x8e8) = *(undefined4 *)((int)this + 0x458);
  pvVar3 = Deep_Scene_create(*(void **)((int)this + 0x25c));
  *(void **)((int)this + 0x260) = pvVar3;
  FUN_007941d0(&pipelineLevel_,&arg9,&arg10);
  (**(code **)(**(int **)(*(int *)((int)this + 0x25c) + 0x1d0) + 0x128))(arg9);
  *(undefined4 *)((int)this + 0x268) = 0;
  *(int *)((int)this + 0x438) = pipelineLevel_;
  if (2 < pipelineLevel_) {
    uVar5 = FUN_00748bf0("pipeline_3.xml");
    *(undefined4 *)((int)this + 0x268) = uVar5;
    *(undefined4 *)((int)this + 0x438) = 3;
  }
  if ((1 < *(int *)((int)this + 0x438)) && (*(int *)((int)this + 0x268) == 0)) {
    uVar5 = FUN_00748bf0("pipeline_2.xml");
    *(undefined4 *)((int)this + 0x268) = uVar5;
    *(undefined4 *)((int)this + 0x438) = 2;
  }
  if (0 < *(int *)((int)this + 0x438)) {
    if (*(int *)((int)this + 0x268) != 0) goto LAB_00795ae4;
    uVar5 = FUN_00748bf0("pipeline_1.xml");
    *(undefined4 *)((int)this + 0x268) = uVar5;
    *(undefined4 *)((int)this + 0x438) = 1;
  }
  if (*(int *)((int)this + 0x268) == 0) {
    iVar2 = FUN_00748bf0("pipeline_0.xml");
    *(int *)((int)this + 0x268) = iVar2;
    *(undefined4 *)((int)this + 0x438) = 0;
    if (iVar2 == 0) {
      ExceptionList = pvStack_40;
      return '\x04';
    }
  }
LAB_00795ae4:
  pvVar3 = Mem_Alloc(0x1c8);
  uStack_38 = 2;
  if (pvVar3 == (void *)0x0) {
    iVar2 = 0;
  }
  else if (*(int *)((int)this + 0x438) == 0) {
    iVar2 = FUN_010b13f0(*(undefined4 *)((int)this + 0x25c),"lights_0.xml");
  }
  else {
    pcVar6 = "lights_1.xml";
    if (*(int *)((int)this + 0x438) != 1) {
      pcVar6 = "lights.xml";
    }
    iVar2 = FUN_010b13f0(*(undefined4 *)((int)this + 0x25c),pcVar6);
  }
  uStack_38 = 0xffffffff;
  *(int *)((int)this + 0x2dc) = iVar2;
  if (*(char *)(iVar2 + 0x19c) == '\0') {
    ExceptionList = pvStack_40;
    return '\x05';
  }
  pvVar3 = Mem_Alloc(0x1d0);
  uStack_38 = 3;
  if (pvVar3 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    pvStack_84 = _DAT_01cb54c0;
    pvStack_74 = _DAT_01cb54c0;
    uStack_70 = uRam01cb54c4;
    uStack_6c = uRam01cb54c8;
    uStack_68 = uRam01cb54cc;
    uStack_64 = _DAT_01cb5430;
    uStack_60 = uRam01cb5434;
    uStack_5c = uRam01cb5438;
    uStack_58 = uRam01cb543c;
    fStack_54 = 0.0 - _DAT_01cb5420;
    fStack_50 = 0.0 - fRam01cb5424;
    fStack_4c = 0.0 - fRam01cb5428;
    fStack_48 = 0.0 - fRam01cb542c;
    uVar5 = FUN_00814580(*(undefined4 *)((int)this + 0x25c),PTR_s_resources_sky__01b2eeb4,
                         *(undefined4 *)((int)this + 0x2dc),&fStack_54,&pvStack_74,&uStack_64,
                         &pvStack_84);
  }
  uStack_38 = 0xffffffff;
  *(undefined4 *)((int)this + 0x2e0) = uVar5;
  pvVar3 = Mem_Alloc(0x8a0);
  uStack_38 = 4;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = Sky_ctor(pvVar3,*(void **)((int)this + 0x2e0),*(void **)((int)this + 0x260));
  }
  uStack_38 = 0xffffffff;
  *(void **)((int)this + 0x2e4) = pvVar3;
  FUN_007929d0(arg10);
  FUN_00791270(arg11);
  FUN_007922e0(*(undefined4 *)((int)this + 0x260),*(undefined4 *)((int)this + 0x2e4));
  pvVar3 = Mem_Alloc(0x8b00);
  uStack_38 = 5;
  if (pvVar3 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_007f6200();
  }
  uStack_38 = 0xffffffff;
  *(undefined4 *)((int)this + 0x26c) = uVar5;
  FUN_007f10a0(&DAT_0175b400);
  ExceptionList = pvStack_44;
  return '\0';
}

