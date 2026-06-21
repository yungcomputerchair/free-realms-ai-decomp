// addr: 0x00912310
// name: LobbyGameList_removeFirstAndDestroy
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyGameList_removeFirstAndDestroy(void * this) */

void __fastcall LobbyGameList_removeFirstAndDestroy(void *this)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Removes the first LobbyGame node from an intrusive hash/list, unlinks it from
                       bucket and order chains, destroys its ApiLobbyGameOption and character-guid
                       lists, then frees it. */
  puStack_8 = &LAB_0158c90c;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  _Memory = *(undefined4 **)((int)this + 4);
  if (_Memory == (undefined4 *)0x0) {
    return;
  }
  puVar2 = *(undefined4 **)((int)this + ((uint)_Memory[3] % 100) * 4 + 0x10);
  puVar1 = (undefined4 *)((int)this + ((uint)_Memory[3] % 100) * 4 + 0x10);
  do {
    ExceptionList = &local_c;
    if (puVar2 == (undefined4 *)0x0) {
LAB_0091238d:
      if (_Memory[4] == 0) {
        *(undefined4 *)((int)this + 4) = _Memory[5];
      }
      else {
        *(undefined4 *)(_Memory[4] + 0x14) = _Memory[5];
      }
      if (_Memory[5] == 0) {
        *(undefined4 *)((int)this + 8) = _Memory[4];
      }
      else {
        *(undefined4 *)(_Memory[5] + 0x10) = _Memory[4];
      }
      _Memory[5] = 0;
      _Memory[4] = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
      *_Memory = LobbyGame::vftable;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      FUN_0070a790(uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      _Memory[0x19] = SoeUtil::List<ApiLobbyGameOption,-1>::vftable;
      FUN_008d4b10();
      local_4 = 0xffffffff;
      _Memory[10] = SoeUtil::
                    List<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,-1>::
                    vftable;
      FUN_008d3ee0();
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (puVar2 == _Memory) {
      *puVar1 = puVar2[2];
      puVar2[2] = 0;
      puVar2[3] = 0;
      goto LAB_0091238d;
    }
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar1;
  } while( true );
}

