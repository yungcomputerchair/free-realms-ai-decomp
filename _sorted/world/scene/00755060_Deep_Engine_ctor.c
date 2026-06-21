// addr: 0x00755060
// name: Deep_Engine_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_Engine_ctor(void * this, void * renderDevice, void * resourceMgr,
   char * name, char ownsName_) */

void * __thiscall
Deep_Engine_ctor(void *this,void *renderDevice,void *resourceMgr,char *name,char ownsName_)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deep::Engine, initializes multiple parameter/material/vertex
                       containers, stores engine service pointers, allocates and copies a name
                       string, and sets default state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015554ea;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *(undefined ***)this = Deep::Engine::vftable;
  FUN_00fc4580(4000);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined1 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  local_4._0_1_ = 0x10;
  FUN_007532c0(uVar3);
  local_4._0_1_ = 0x12;
  *(void **)((int)this + 0x1d0) = renderDevice;
  *(void **)((int)this + 0x1d4) = resourceMgr;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  _memset((void *)((int)this + 0x1e8),0,400);
  *(undefined4 *)((int)this + 0x1d8) = 0;
  local_4._0_1_ = 0x13;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  _memset((void *)((int)this + 0x388),0,400);
  *(undefined4 *)((int)this + 0x378) = 0;
  local_4._0_1_ = 0x14;
  *(undefined4 *)((int)this + 0x51c) = 0;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  _memset((void *)((int)this + 0x528),0,400);
  *(undefined4 *)((int)this + 0x518) = 0;
  local_4._0_1_ = 0x15;
  FUN_0074d9a0();
  local_4._0_1_ = 0x16;
  FUN_00754260();
  local_4._0_1_ = 0x17;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  *(undefined4 *)((int)this + 0x818) = 0;
  _memset((void *)((int)this + 0x81c),0,0x50);
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x870) = 0;
  *(undefined4 *)((int)this + 0x874) = 0;
  *(undefined4 *)((int)this + 0x878) = 0;
  *(undefined4 *)((int)this + 0x87c) = 0;
  *(undefined4 *)((int)this + 0x880) = 0;
  *(undefined4 *)((int)this + 0x884) = 0;
  *(undefined4 *)((int)this + 0x888) = 0;
  *(undefined4 *)((int)this + 0x88c) = 0;
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0;
  *(undefined4 *)((int)this + 0x89c) = 0;
  *(undefined4 *)((int)this + 0x8a0) = 0;
  *(undefined4 *)((int)this + 0x86c) = 0;
  *(undefined ***)((int)this + 0x8a4) = SoeUtil::List<Deep::VertexPool,-1>::vftable;
  *(undefined4 *)((int)this + 0x8b0) = 0;
  *(undefined4 *)((int)this + 0x8a8) = 0;
  *(undefined4 *)((int)this + 0x8ac) = 0;
  *(undefined ***)((int)this + 0x8b4) = SoeUtil::Array<Deep::MaterialDefinition*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x8b8) = 0;
  *(undefined4 *)((int)this + 0x8bc) = 0;
  *(undefined4 *)((int)this + 0x8c0) = 0;
  local_4._0_1_ = 0x1b;
  *(undefined4 *)((int)this + 0x8c8) = 0;
  *(undefined4 *)((int)this + 0x8cc) = 0;
  *(undefined4 *)((int)this + 0x8d0) = 0;
  *(undefined4 *)((int)this + 0x8e8) = 0;
  *(undefined4 *)((int)this + 0x8ec) = 0;
  *(undefined4 *)((int)this + 0x8c4) = 0;
  cVar2 = *name;
  pcVar4 = name;
  while (cVar2 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar4;
  }
  pcVar4 = pcVar4 + (2 - (int)name);
  pcVar5 = Mem_Alloc((uint)pcVar4);
  pcVar1 = pcVar5 + (int)(pcVar4 + -1);
  *(char **)((int)this + 0x8d4) = pcVar5;
  if (pcVar5 != pcVar1) {
    iVar8 = (int)name - (int)pcVar5;
    do {
      if (pcVar5[iVar8] == '\0') break;
      *pcVar5 = pcVar5[iVar8];
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar1);
  }
  *pcVar5 = '\0';
  pcVar4[*(int *)((int)this + 0x8d4) + -2] = '\0';
  pcVar4[*(int *)((int)this + 0x8d4) + -1] = '\0';
  if ((pcVar4[*(int *)((int)this + 0x8d4) + -3] != '/') &&
     (pcVar4[*(int *)((int)this + 0x8d4) + -3] != '\\')) {
    pcVar4[*(int *)((int)this + 0x8d4) + -2] = '\\';
  }
  if (ownsName_ != '\0') {
    pvVar6 = Mem_Alloc(0x238);
    local_4._0_1_ = 0x1c;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_007485b0(this);
    }
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    *(undefined4 *)((int)this + 0x8ec) = uVar7;
    FUN_00fc4bd0();
  }
  ExceptionList = local_c;
  return this;
}

