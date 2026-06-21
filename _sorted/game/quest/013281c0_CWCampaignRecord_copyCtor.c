// addr: 0x013281c0
// name: CWCampaignRecord_copyCtor
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCampaignRecord_copyCtor(void * this, void * other) */

void * __thiscall CWCampaignRecord_copyCtor(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a campaign record by copying four std::string fields and the
                       integer id at offset +0x38. Used when copying map node payloads for the
                       campaign map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01679a79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,other,0,0xffffffff);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 0x1c),0,0xffffffff);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)other + 0x38);
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x3c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 0x3c),0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x58),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)other + 0x58),0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

