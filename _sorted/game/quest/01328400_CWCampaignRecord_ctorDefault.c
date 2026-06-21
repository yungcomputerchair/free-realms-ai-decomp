// addr: 0x01328400
// name: CWCampaignRecord_ctorDefault
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCampaignRecord_ctorDefault(void * this) */

void * __fastcall CWCampaignRecord_ctorDefault(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the default campaign record with strings 'Cham Syndulla',
                       'cham_syndulla', 'Question the Captain', version '1.01', and id 0x65. Used
                       when map lookup needs to create or return the default campaign entry. */
  puStack_8 = &LAB_01679b59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  local_4 = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (this,"Cham Syndulla",0xd);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x1c),
             "cham_syndulla",0xd);
  *(undefined4 *)((int)this + 0x38) = 0x65;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x3c),
             "Question the Captain",0x14);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x58),
             "1.01",4);
  ExceptionList = local_c;
  return this;
}

