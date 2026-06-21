// addr: 0x0091a7e0
// name: LobbyGameInfo_deserializeGameList
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyGameInfo_deserializeGameList(void * this, void * stream) */

void __cdecl LobbyGameInfo_deserializeGameList(void *this,void *stream)

{
  int *piVar1;
  uint *puVar2;
  void *this_00;
  void *owner;
  uint uVar3;
  void *this_01;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Rebuilds the lobby game list by clearing existing entries, allocating
                       LobbyGame objects, and deserializing each one from the stream. Called by
                       LobbyGameInfo_deserialize. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158d56b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyGameList_removeFirstAndDestroy(stream);
  piVar1 = *(int **)((int)this + 8) + 1;
  if (*(int **)((int)this + 0xc) < piVar1) {
    local_18 = 0;
    *(undefined1 *)((int)this + 0x10) = 1;
    *(int **)((int)this + 8) = *(int **)((int)this + 0xc);
  }
  else {
    local_18 = **(int **)((int)this + 8);
    *(int **)((int)this + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < local_18) {
    do {
      if (*(char *)((int)this + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      puVar2 = *(uint **)((int)this + 8) + 1;
      if (*(uint **)((int)this + 0xc) < puVar2) {
        uVar3 = 0;
        *(undefined1 *)((int)this + 0x10) = 1;
        *(uint **)((int)this + 8) = *(uint **)((int)this + 0xc);
      }
      else {
        uVar3 = **(uint **)((int)this + 8);
        *(uint **)((int)this + 8) = puVar2;
      }
      this_00 = Mem_Alloc(0x110);
      this_01 = (void *)0x0;
      local_4 = 0;
      if (this_00 != (void *)0x0) {
        this_01 = LobbyGame_ctor(this_00,owner);
      }
      local_4 = 0xffffffff;
      LobbyGame_deserialize(this_01,this);
      *(undefined4 *)((int)this_01 + 0x10) = *(undefined4 *)((int)stream + 8);
      if (*(int *)((int)stream + 8) == 0) {
        *(void **)((int)stream + 4) = this_01;
      }
      else {
        *(void **)(*(int *)((int)stream + 8) + 0x14) = this_01;
      }
      *(void **)((int)stream + 8) = this_01;
      *(uint *)((int)this_01 + 0xc) = uVar3;
      *(undefined4 *)((int)this_01 + 8) = *(undefined4 *)((int)stream + (uVar3 % 100) * 4 + 0x10);
      *(void **)((int)stream + (uVar3 % 100) * 4 + 0x10) = this_01;
      *(int *)((int)stream + 0xc) = *(int *)((int)stream + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

