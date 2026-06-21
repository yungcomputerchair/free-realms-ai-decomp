// addr: 0x01442db0
// name: PollChoice_initFields
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollChoice_initFields(void * this, int choiceId_, int pollId_, void *
   choiceText, int votes_, int sortOrder_) */

void __thiscall
PollChoice_initFields
          (void *this,int choiceId_,int pollId_,void *choiceText,int votes_,int sortOrder_)

{
                    /* Initializes a PollChoice-like record by storing two ids, copying a
                       std::string into the inline text field, and storing two trailing numeric
                       fields. Nearby PollChoice_ctor and caller context support the class
                       association. */
  *(int *)((int)this + 8) = pollId_;
  *(int *)((int)this + 4) = choiceId_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xc),
             choiceText,0,0xffffffff);
  *(int *)((int)this + 0x28) = votes_;
  *(int *)((int)this + 0x2c) = sortOrder_;
  return;
}

