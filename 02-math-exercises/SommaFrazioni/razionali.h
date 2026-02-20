#if !defined RAZIONALI_H
#define RAZIONALI_H

struct fraz {
    int num;
    unsigned int den;
};

extern void fr_somma(struct fraz* ris, const struct fraz* a, const struct fraz* b);

#endif /* RAZIONALI_H */