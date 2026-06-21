// addr: 0x00d4a350
// name: GameRuntimeTerrain_Tile_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameRuntimeTerrain_Tile_ctor(void * this) */

void * __fastcall GameRuntimeTerrain_Tile_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameRuntimeTerrain::Tile, initializing eco data, runtime object,
                       raw light/area/group lists, array fields, flags, and default tile state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616299;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007648d0(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *(undefined ***)this = GameRuntimeTerrain::Tile::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  FUN_00d4a220();
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  FUN_00d48550();
  *(undefined ***)((int)this + 0x424) = SoeUtil::Array<bool,0,1>::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0x434) = 0;
  FUN_00d49010();
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined ***)((int)this + 0x460) = SoeUtil::List<GameRuntimeTerrain::RawArea,-1>::vftable;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined ***)((int)this + 0x474) = SoeUtil::List<GameRuntimeTerrain::RawGroup,-1>::vftable;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *(undefined4 *)((int)this + 0x484) = 0xffffffff;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined1 *)((int)this + 0x494) = 0;
  *(undefined1 *)((int)this + 0x495) = 0;
  *(undefined1 *)((int)this + 0x496) = 0;
  *(undefined1 *)((int)this + 0x497) = 0;
  *(undefined1 *)((int)this + 0x498) = 0;
  *(undefined1 *)((int)this + 0x499) = 0;
  *(undefined1 *)((int)this + 0x49a) = 0;
  *(undefined1 *)((int)this + 0x49b) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined1 *)((int)this + 0x4bc) = 1;
  *(undefined1 *)((int)this + 0x4bd) = 0;
  *(undefined1 *)((int)this + 0x4be) = 0;
  if ((*(byte *)((int)this + 0x10) & 1) != 0) {
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) & 0xfffe;
    if (*(int *)((int)this + 4) != 0) {
      FUN_00735a30();
    }
    (**(code **)(*(int *)this + 0x38))();
  }
  ExceptionList = local_c;
  return this;
}

