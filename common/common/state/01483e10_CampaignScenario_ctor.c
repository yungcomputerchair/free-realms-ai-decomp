// addr: 0x01483e10
// name: CampaignScenario_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CampaignScenario_ctor(void * this) */

void * __fastcall CampaignScenario_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CampaignScenario PersistentComponent, installs
                       CampaignScenario::vftable, initializes multiple string fields to
                       empty/default small-string state, and clears flags/counters. Evidence is the
                       explicit CampaignScenario::vftable assignment. */
  puStack_8 = &LAB_016a1075;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = PersistentBase::vftable;
  *(undefined ***)this = PersistentComponent::vftable;
  *(undefined ***)this = CampaignScenario::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xf;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  local_4 = 6;
  *(undefined4 *)((int)this + 0xb0) = 0xf;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined1 *)((int)this + 0x9c) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x98),
             "",0);
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xb5) = 0;
  *(undefined1 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xbd) = 0;
  ExceptionList = local_c;
  return this;
}

