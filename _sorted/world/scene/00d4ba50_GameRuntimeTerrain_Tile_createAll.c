// addr: 0x00d4ba50
// name: GameRuntimeTerrain_Tile_createAll
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameRuntimeTerrain_Tile_createAll(void * this) */

bool __fastcall GameRuntimeTerrain_Tile_createAll(void *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
                    /* Creates all runtime resources for a terrain tile after validating texture and
                       fallback texture availability, logging Tile::CreateAll failures to
                       FreeRealms.log. */
  if ((*(char *)(*(int *)((int)this + 0x14) + 0x4e79) == '\0') &&
     (uVar5 = 0, *(int *)((int)this + 0x4c) != 0)) {
    iVar4 = 0;
    do {
      if ((*(int *)((int)this + 0x58) <= (int)uVar5) &&
         (*(int *)((int)this + 0x58) < (int)(uVar5 + 1))) {
        FUN_00d4a0f0(uVar5);
      }
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + iVar4) + 0x2c);
      if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 8), iVar1 == 0)) ||
         (*(int *)(iVar1 + 0x2c) == 0)) {
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x14) + 0x1c);
        uVar3 = *(undefined4 *)(*(int *)((int)this + 0x14) + 0x20);
        if ((*(int *)((int)this + 0x58) <= (int)uVar5) &&
           (*(int *)((int)this + 0x58) < (int)(uVar5 + 1))) {
          FUN_00d4a0f0(uVar5);
        }
        Log_Info("FreeRealms.log",
                 "Tile::CreateAll: Failed on Texture %s in Tile (long,lat) %d,%d from Chunk (long,lat) %d,%d"
                 ,*(undefined4 *)(*(int *)(uVar5 * 0xb8 + *(int *)((int)this + 0x54)) + 8),
                 *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),uVar2,uVar3);
        return false;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xb8;
    } while (uVar5 < *(uint *)((int)this + 0x4c));
  }
  iVar4 = *(int *)((int)this + 0x14);
  if ((*(char *)(iVar4 + 0x4e78) != '\0') && (*(int *)(iVar4 + 0x4e80) == 0)) {
    Log_Info("FreeRealms.log",
             "Tile::CreateAll: Failed on Fallback Texture in Tile (long,lat) %d,%d from Chunk (long,lat) %d,%d"
             ,*(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
             *(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar4 + 0x20));
    return false;
  }
  FUN_00d46420();
  AppPhysics_createMeshCollisionData();
  FUN_00d4b390();
  (**(code **)(*(int *)this + 0x28))(*(undefined4 *)((int)this + 0x4c0));
  return true;
}

