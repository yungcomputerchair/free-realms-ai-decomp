// addr: 0x00d42160
// name: GameRuntimeTerrain_FloraManager_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * GameRuntimeTerrain_FloraManager_ctor(void * this, int tileLongitude_,
   int tileLatitude_, int tileArg_) */

void * __thiscall
GameRuntimeTerrain_FloraManager_ctor(void *this,int tileLongitude_,int tileLatitude_,int tileArg_)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 local_34;
  void *local_28;
  void *local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a GameRuntimeTerrain::FloraManager, initializes flora
                       batches/resources, creates a visibility sphere object, allocates FloraManager
                       vertex/index buffers, seeds index data, and enables update flags. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0161524c;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  FUN_007648d0(DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  local_14 = 0;
  *(undefined ***)this = GameRuntimeTerrain::FloraManager::vftable;
  puVar7 = &DAT_01bc2660;
  puVar8 = (undefined4 *)((int)this + 0x20);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(int *)((int)this + 100) = tileLatitude_;
  *(int *)((int)this + 0x60) = tileLongitude_;
  *(int *)((int)this + 0x68) = tileArg_;
  FUN_00d3ec10();
  local_14._0_1_ = 1;
  FUN_00d41e80();
  local_14._0_1_ = 2;
  piVar6 = (int *)0x0;
  *(undefined4 *)((int)this + 0x620) = 0;
  uVar2 = FUN_00748b00(0x9af0141b);
  *(undefined4 *)((int)this + 0x624) = uVar2;
  uVar2 = FUN_00754710(uVar2);
  *(undefined4 *)((int)this + 0x628) = uVar2;
  local_28 = Mem_Alloc(0x40);
  local_14._0_1_ = 3;
  if (local_28 != (void *)0x0) {
    piVar6 = Deep_VisibilitySphereObject_ctor(local_28);
  }
  local_14 = CONCAT31(local_14._1_3_,2);
  local_40 = 0;
  local_3c = 0;
  local_38 = (void *)0x0;
  local_34 = _DAT_0175b420;
  (**(code **)(*piVar6 + 0x28))(&local_40,_DAT_0183f794,&DAT_01bc2660);
  FUN_00764c50(piVar6);
  LOCK();
  iVar4 = piVar6[1] + -1;
  piVar6[1] = iVar4;
  UNLOCK();
  if (iVar4 == 0) {
    (**(code **)(*piVar6 + 4))();
  }
  puVar7 = (undefined4 *)((int)this + 0xcc);
  iVar4 = 2;
  do {
    uVar2 = FUN_00750490(1,"FloraManager",0x10000,0x20,1);
    *puVar7 = uVar2;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar6 = (int *)FUN_007502c0(1,"FloraManager",0x18000,2,0);
  *(int **)((int)this + 0x90) = piVar6;
  iVar4 = (**(code **)(*piVar6 + 8))(0,0,0,0);
  iVar5 = 0;
  psVar3 = (short *)(iVar4 + 4);
  do {
    sVar1 = (short)iVar5 * 8;
    psVar3[-1] = sVar1 + 1;
    *psVar3 = sVar1 + 2;
    psVar3[2] = sVar1 + 2;
    psVar3[3] = sVar1 + 3;
    psVar3[5] = sVar1 + 5;
    psVar3[-2] = sVar1;
    psVar3[1] = sVar1;
    psVar3[4] = sVar1 + 4;
    psVar3[6] = sVar1 + 6;
    psVar3[7] = sVar1 + 4;
    psVar3[8] = sVar1 + 6;
    psVar3[9] = sVar1 + 7;
    iVar5 = iVar5 + 1;
    psVar3 = psVar3 + 0xc;
  } while (iVar5 < 0x2000);
  (**(code **)(**(int **)((int)this + 0x90) + 0xc))();
  if (((byte)*(ushort *)((int)this + 0x10) >> 1 & 1) == 0) {
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | 2;
    if (*(int *)((int)this + 4) != 0) {
      FUN_00735a30();
    }
    (**(code **)(*(int *)this + 0x3c))(1);
  }
  if (((byte)*(ushort *)((int)this + 0x10) >> 3 & 1) == 0) {
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | 8;
    if (*(int *)((int)this + 4) != 0) {
      FUN_00735a30();
    }
    (**(code **)(*(int *)this + 0x44))();
  }
  uVar2 = DAT_01818a88;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  ExceptionList = local_38;
  return this;
}

