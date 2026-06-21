// addr: 0x00d42630
// name: GameRuntimeTerrain_FloraManager_initializeTerrain
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameRuntimeTerrain_FloraManager_initializeTerrain(void * this, void *
   terrain, void * config, int longitude_, int latitude_, int tileArg_, int width_, int height_) */

bool __thiscall
GameRuntimeTerrain_FloraManager_initializeTerrain
          (void *this,void *terrain,void *config,int longitude_,int latitude_,int tileArg_,
          int width_,int height_)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  void *this_00;
  int *piVar4;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Initializes FloraManager terrain/chunk parameters, runs a virtual readiness
                       check, allocates a GameRuntimeTerrain::Tile, and seeds it with tile
                       coordinates. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161531b;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  *(void **)((int)this + 8) = terrain;
  FUN_006f9e60(config);
  *(int *)((int)this + 0xc8e3c) = width_;
  *(int *)((int)this + 0xc8e40) = height_;
  *(int *)((int)this + 0xc8e48) = longitude_;
  *(int *)((int)this + 0xc8e44) = latitude_;
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(int *)((int)this + 0xc8e4c) = tileArg_;
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return false;
  }
  this_00 = Mem_Alloc(0x630);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = GameRuntimeTerrain_FloraManager_ctor
                       (this_00,*(int *)((int)this + 0xc8e48),*(int *)((int)this + 0xc8e44),
                        *(int *)((int)this + 0xc8e4c));
  }
  uStack_4 = 0xffffffff;
  *(int **)((int)this + 0xc7e08) = piVar4;
  (**(code **)(*piVar4 + 0x28))(*(undefined4 *)((int)this + 0xc8e48));
  ExceptionList = unaff_ESI;
  return true;
}

