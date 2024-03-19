enum HitSounds
{
    Normal = 1 << 0,  // This is 1, but Normal should be played regardless if it's 0 or 1.
    Whistle = 1 << 1, // 2
    Finish = 1 << 2,  // 4
    Clap = 1 << 3     // 8
};