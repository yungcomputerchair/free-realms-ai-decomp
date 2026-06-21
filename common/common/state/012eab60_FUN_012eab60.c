// addr: 0x012eab60
// name: FUN_012eab60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_012eab60(void * this, void * name, int priority_) */

void * __thiscall FUN_012eab60(void *this,void *name,int priority_)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Messaging::LoopBase with a name and caller-supplied priority/limit
                       field. Outside state subsystem; leave current name unchanged. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167309c;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = Messaging::LoopBase::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),name
             ,0,0xffffffff);
  local_4 = 0;
  sync_queue_like_ctor((void *)((int)this + 0x20));
  local_4._0_1_ = 1;
  FUN_012ea9b0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_012eaa20();
  *(int *)((int)this + 0x74) = priority_;
  ExceptionList = local_c;
  return this;
}

