// addr: 0x013abc90
// name: TcgClient_setPendingTextAction
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_setPendingTextAction(void * this, int valueA_, int valueB_, int
   valueC_, int valueD_, void * text, int valueE_, int valueF_) */

void __thiscall
TcgClient_setPendingTextAction
          (void *this,int valueA_,int valueB_,int valueC_,int valueD_,void *text,int valueE_,
          int valueF_)

{
                    /* Stores four scalars at offsets 0xa8-0xb4, assigns a string at 0xb8, stores
                       two more scalars at 0xd4/0xd8, and sets a valid flag at 0xdc. Exact class and
                       field names are not proven, but it clearly stages a text-bearing action/state
                       block. */
  *(int *)((int)this + 0xac) = valueB_;
  *(int *)((int)this + 0xa8) = valueA_;
  *(int *)((int)this + 0xb0) = valueC_;
  *(int *)((int)this + 0xb4) = valueD_;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0xb8),
             text,0,0xffffffff);
  *(int *)((int)this + 0xd4) = valueE_;
  *(int *)((int)this + 0xd8) = valueF_;
  *(undefined1 *)((int)this + 0xdc) = 1;
  return;
}

