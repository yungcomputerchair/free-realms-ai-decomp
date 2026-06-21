// addr: 0x01048940
// name: LobbyGame_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyGame_ctor(void * this, void * owner) */

void * __fastcall LobbyGame_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LobbyGame, clearing intrusive list/hash links and fields,
                       initializing guid and ApiLobbyGameOption lists, and setting default
                       flags/ids. */
  puStack_8 = &LAB_01639e46;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyGame::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)((int)this + 0x28) =
       SoeUtil::List<SoeUtil::StrongType<unsigned___int64,SoeUtilSignatureCharacterGuid,0>,-1>::
       vftable;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined1 *)((int)this + 0x45) = 0;
  *(undefined1 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  *(undefined4 *)((int)this + 0x50) = DAT_01cb6a18;
  *(undefined4 *)((int)this + 0x54) = DAT_01cb6a1c;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  FUN_00a249f0(uVar1);
  *(undefined1 *)((int)this + 0x108) = 0;
  ExceptionList = local_c;
  return this;
}

