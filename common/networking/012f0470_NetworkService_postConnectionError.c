// addr: 0x012f0470
// name: NetworkService_postConnectionError
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_postConnectionError(void * this, int errorCode_) */

int __thiscall NetworkService_postConnectionError(void *this,int errorCode_)

{
  uint uVar1;
  int value_;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Maps a NetworkService connection error code and posts a display action
                       containing a failure flag and two integer arguments. Evidence: calls
                       NetworkService_mapConnectionError and DisplayActionBuilder addBool/addInt
                       helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01673e5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  value_ = NetworkService_mapConnectionError(this,errorCode_);
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0xe);
  DisplayActionBuilder_addBoolArg(pvVar2,false);
  DisplayActionBuilder_addIntArg(pvVar2,value_);
  DisplayActionBuilder_addIntArg(pvVar2,0);
  DisplayActionManager_ensureSingleton();
  uVar1 = FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return uVar1 & 0xffffff00;
}

