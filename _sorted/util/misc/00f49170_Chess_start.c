// addr: 0x00f49170
// name: Chess_start
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* public: void __thiscall Chess::start(int) */

void __thiscall Chess::Chess_start(Chess *this,int param_1)

{
                    /* Stores the start parameter into the Chess object and clears a state/counter
                       field at offset 0x1280. */
  this[0x13] = param_1._0_1_;
  *(undefined4 *)(this + 0x1280) = 0;
  return;
}

