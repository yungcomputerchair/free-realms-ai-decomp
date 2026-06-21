// addr: 0x00b864d0
// name: LeaderBoardResponse_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LeaderBoardResponse_ctor(void * this) */

void * __fastcall LeaderBoardResponse_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a LeaderBoardResponse-like object, initializing the EntryLine
                       array member and clearing response fields. */
  puStack_8 = &LAB_015e14db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)((int)this + 0xc) = SoeUtil::Array<LeaderBoardResponse::EntryLine,0,1>::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00b86200(*(undefined4 *)((int)this + 0x14));
  ExceptionList = local_c;
  return this;
}

