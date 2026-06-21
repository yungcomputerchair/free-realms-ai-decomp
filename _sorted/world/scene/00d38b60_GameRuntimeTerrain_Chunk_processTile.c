// addr: 0x00d38b60
// name: GameRuntimeTerrain_Chunk_processTile
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameRuntimeTerrain_Chunk_processTile(void * this, int longitude_, int
   latitude_, int * createdCount) */

bool __thiscall
GameRuntimeTerrain_Chunk_processTile(void *this,int longitude_,int latitude_,int *createdCount)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Finds or creates a runtime terrain tile for the requested coordinates,
                       invokes Tile::CreateAll when needed, queues completed tiles, and triggers
                       terrain visibility/update helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01613fbb;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_10 = (void *)0x0;
  cVar2 = FUN_00d3ff50(longitude_,latitude_,&local_10,1);
  if (local_10 == (void *)0x0) {
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return false;
    }
    if (*(int *)((int)this + 0x4c) == 0) {
      pvVar6 = Mem_Alloc(0x4cc);
      local_4 = 0;
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = GameRuntimeTerrain_Tile_ctor(pvVar6);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)((int)this + 0x4c) = pvVar6;
      FUN_00d44200(*(undefined4 *)((int)this + 0x10),0);
    }
    FUN_00d38a20((undefined4 *)((int)this + 0x4c));
    ExceptionList = local_c;
    return true;
  }
  if (*(char *)((int)local_10 + 0x498) == '\0') {
    if ((((*(char *)((int)local_10 + 0x499) == '\0') && (*(char *)((int)local_10 + 0x49a) == '\0'))
        && (*(char *)((int)local_10 + 0x49b) == '\0')) &&
       ((*createdCount < 4 && (bVar3 = GameRuntimeTerrain_Tile_createAll(local_10), bVar3)))) {
      *createdCount = *createdCount + 1;
    }
    if (((*(char *)((int)local_10 + 0x498) == '\0') && (*(char *)((int)local_10 + 0x499) == '\0'))
       && ((*(char *)((int)local_10 + 0x49a) == '\0' && (*(char *)((int)local_10 + 0x49b) == '\0')))
       ) {
      ExceptionList = local_c;
      return false;
    }
  }
  FUN_00d44dd0(uVar4);
  if (*(char *)((int)this + 0x32) != '\0') {
    FUN_00d44e10();
  }
  iVar5 = *(int *)((int)this + 0x58) + 1;
  if (*(int *)((int)this + 0x5c) < iVar5) {
    FUN_00d38410(iVar5,0);
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x54) + *(int *)((int)this + 0x58) * 4);
  *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = local_10;
  }
  ExceptionList = local_c;
  return true;
}

