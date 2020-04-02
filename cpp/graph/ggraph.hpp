#include "../fx.h"
#include "../linkedqueue/linkedqueue.h"
namespace ggraph
{
typedef size_t vexid_t;
typedef struct Vex
{
    vexid_t id;
    fx::data_t data;
} Vex;

typedef struct Arc
{
    vexid_t start;
    vexid_t end;
} Arc;
class Graph
{
public:
    virtual size_t getVexesCount();
    virtual size_t getArcsCount();
    virtual Vex *getAllVexes();
    virtual Arc *getAllArcs();
    virtual vexid_t *getVexesId();
    virtual Vex *getAdjVex();
    virtual void getAllAdjVex(size_t size,vexid_t vexid);
    virtual Vex *getNextAdjVex();
    Vex *getVexById(vexid_t id)
    {
        Vex **vexes = getAllVexesPtr();
        size_t arcsCount = getArcsCount();
        for (size_t i = 0; i < arcsCount; i++)
        {
            if (vexes[i]->id == id)
            {
                return vexes[i];
            }
        }
    }
    Arc *getAllArcsOf(vexid_t id)
    {
        Arc **arcs = getAllArcsPtr();
        size_t vexesCount = getVexesCount();
        for (size_t i = 0; i < vexesCount; i++)
        {
            if (arcs[i]->start == id || arcs[i]->end == id)
            {
                return arcs[i];
            }
        }
    }
};
void bfs(Graph *g, fx::Traveller traveller)
{
    size_t vexesCount = g->getVexesCount();
    bool *visitedFlags = (bool *)malloc(sizeof(bool) * vexesCount);
    LinkedQueue queue;
    fx::data_t buffer;

    for (int i = 0; i < vexesCount; i++)
    {
        visitedFlags[i] = false;
    }
    LQueue_init(queue);

    Vex *vex = g->getVexById(0);
    LQueue_en(queue, vex);
    while (!LQueue_empty(queue))
    {
        LQueue_de(queue, buffer);
        Vex *crtVex = (Vex *)buffer;
        if (!visitedFlags[crtVex->id])
        {
            visitedFlags[crtVex->id] = true;
            traveller(buffer,crtVex->id,vexesCount);
            
        }
    }
}
void dfs(Graph g, fx::Traveller traveller)
{
}
} // namespace ggraph