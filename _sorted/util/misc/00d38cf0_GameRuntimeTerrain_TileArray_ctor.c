// addr: 0x00d38cf0
// name: GameRuntimeTerrain_TileArray_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall GameRuntimeTerrain_TileArray_ctor(undefined4 *param_1)

{
                    /* Initializes a SoeUtil::Array<GameRuntimeTerrain::Tile*> object, first as
                       dynamic Array<...,0,1> and then with fixed capacity 512 vtable. */
  *param_1 = SoeUtil::Array<GameRuntimeTerrain::Tile*,0,1>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = SoeUtil::Array<GameRuntimeTerrain::Tile*,512,1>::vftable;
  return;
}

